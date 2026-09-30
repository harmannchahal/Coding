#include <stdio.h>
#include "stack.h"

int prec_in_str(char x)
{
    int p;

    switch(x)
    {
        case '(' : p = 3; break;

        case '*':
        case '/': p = 2; break;

        case '+':
        case '-': p = 1; break;
    }

    return p;
}

int prec_in_stack(char x)
{
    int p;

    switch(x)
    {
        case '(' : p = 0; break;

        case '*':
        case '/': p = 2; break;

        case '+':
        case '-': p = 1; break;
    }

    return p;
}

void convert(char *s, char *p)
{
    stack_t st;
    init_stack(&st);

    char x;

    while((x = *s++) != '\0')
    {
        if(x == '(' || x == '*' || x == '/' || x == '+' || x == '-')
        {
            if(is_empty(&st))
            {
                push(&st, x);
            }
            else
            {
                while(!is_empty(&st) && prec_in_str(x) <= prec_in_stack(peek(&st)))
                {
                    *p++ = pop(&st);
                    *p++ = ' ';
                }

                push(&st, x);
            }
        }
        else if(x == ')')
        {
            while((x = pop(&st)) != '(')
            {
                *p++ = x;
                *p++ = ' ';
            }
        }
        else
        {
            *p++ = x;
            *p++ = ' ';
        }
    }

    while(!is_empty(&st))
    {
        *p++ = pop(&st);
        *p++ = ' ';
    }

    *p = '\0';

    deinit_stack(&st);
}

int main()
{
    char s[100];
    char p[100];

    printf("enter infix expression : ");
    gets(s);

    printf("infix expression : %s\n", s);

    convert(s, p);

    printf("postfix expression : %s\n", p);
}