#include <stdio.h>
#include "stack.h"

int eval(char *s)
{
    stack_t st;
    init_stack(&st);

    char x;
    int a, b;
    int val = 0;
    int digit = 0;

    while((x = *s++) != '\0')
    {
        if(x == '+')
        {
            a = pop(&st);
            b = pop(&st);

            push(&st, b + a);
        }
        else if(x == '-')
        {
            a = pop(&st);
            b = pop(&st);

            push(&st, b - a);
        }
        else if(x == '*')
        {
            a = pop(&st);
            b = pop(&st);

            push(&st, b * a);
        }
        else if(x == '/')
        {
            a = pop(&st);
            b = pop(&st);

            push(&st, b / a);
        }
        else if(x >= '0' && x <= '9')
        {
            digit = 1;
            val = val * 10 + x - '0';
        }
        else if(x == ' ' && digit)
        {
            digit = 0;

            push(&st, val);

            val = 0;
        }
    }

    val = pop(&st);

    deinit_stack(&st);

    return val;
}

int main()
{
    char s[100];

    printf("enter an expression in postfix\n");

    gets(s);

    printf("postfix expr : %s\n", s);

    printf("result : %d\n", eval(s));
}