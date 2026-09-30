#include <stdio.h>
#include "stack.h"

void init_stack(stack_t *stack)
{
    stack->top = -1;
}

void deinit_stack(stack_t *stack)
{
    stack->top = -1;
}

void push(stack_t *stack, char ch)
{
    if (is_full(stack))
    {
        printf("Stack full; cannot push\n");
    }
    else
    {
        stack->arr[++stack->top] = ch;
    }
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
        return stack->arr[stack->top--];
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
        return stack->arr[stack->top];
    }
}

int is_empty(stack_t *stack)
{
    return stack->top == -1;
}

int is_full(stack_t *stack)
{
    return stack->top == MAX - 1;
}