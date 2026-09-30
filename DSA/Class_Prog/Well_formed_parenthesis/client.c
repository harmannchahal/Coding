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
            push(&stack, 'x');
        }
        else if(ch == ')')
        {
            if(!is_empty(&stack))
            {
                pop(&stack);
            }
            else
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

    printf("Enter parentheses: ");
    gets(s);

    if(is_balanced(s))
    {
        printf("Well formed parentheses\n");
    }
    else
    {
        printf("Not well formed parentheses\n");
    }

    return 0;
}