#include <stdio.h>
#include "stack.h"

int is_balanced(char *s)
{
    stack_t stack;
    init_stack(&stack);

    char ch;
    int valid = 1;

    while(valid && (ch = *s++) != '\0')
    {
        if(ch == '(')
        {
            push(&stack, ')');
        }
        else if(ch == '[')
        {
            push(&stack, ']');
        }
        else if(ch == '{')
        {
            push(&stack, '}');
        }
        else if(ch == ')' || ch == ']' || ch == '}')
        {
            if(is_empty(&stack) || ch != pop(&stack))
            {
                valid = 0;
            }
        }
    }

    int empty = is_empty(&stack);

    deinit_stack(&stack);

    return valid && empty;
}

int main()
{
    char s[100];

    printf("Enter brackets: ");
    gets(s);

    if(is_balanced(s))
    {
        printf("Well formed brackets\n");
    }
    else
    {
        printf("Not well formed brackets\n");
    }

    return 0;
}