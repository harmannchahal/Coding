#include <stdio.h>
#include "stack.h"

int main()
{
    stack_t stack;
    char str[MAX];
    char ch;
    char *s = str;

    init_stack(&stack);

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    while ((ch = *s++) != '\0' && ch != '\n')
    {
        push(&stack, ch);
    }

    while (!is_empty(&stack))
    {
        putchar(pop(&stack));
    }

    putchar('\0');

    return 0;
}