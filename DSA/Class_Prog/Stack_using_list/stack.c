#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void init_stack(stack_t *stack)
{
    stack->top = NULL;
}

void deinit_stack(stack_t *stack)
{
    while (!is_empty(stack))
    {
        pop(stack);
    }
}

void push(stack_t *stack, char ch)
{
    node_t *temp;

    temp = (node_t *)malloc(sizeof(node_t));

    temp->ch = ch;
    temp->next = stack->top;

    stack->top = temp;
}

char pop(stack_t *stack)
{
    if (is_empty(stack))
    {
        printf("Stack empty; cannot pop\n");
        return '\0';
    }
    else
    {
        node_t *temp = stack->top;
        char ch = temp->ch;

        stack->top = temp->next;

        free(temp);

        return ch;
    }
}

char peek(stack_t *stack)
{
    if (is_empty(stack))
    {
        printf("Stack empty; cannot peek\n");
        return '\0';
    }
    else
    {
        return stack->top->ch;
    }
}

int is_empty(stack_t *stack)
{
    return stack->top == NULL;
}