#include <stdio.h>
#include "stack.h"

int main()
{
    stack_t stack;
    char str[MAX];
    char ch;
    char *s = str;

    init_stack(&stack);

    fgets(str, MAX, stdin);

    while ((ch = *s++) != '\0' && ch != '\n')
    {
        push(&stack, ch);
    }

    while (!is_empty(&stack))
    {
        putchar(pop(&stack));
    }

    putchar('\n');

    return 0;
}