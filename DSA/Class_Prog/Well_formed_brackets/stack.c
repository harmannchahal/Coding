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
    if(!is_full(stack))
    {
        stack->arr[++stack->top] = ch;
    }
    else
    {
        printf("Stack full\n");
    }
}

char pop(stack_t *stack)
{
    if(!is_empty(stack))
    {
        return stack->arr[stack->top--];
    }
    else
    {
        printf("Stack empty\n");
        return '\0';
    }
}

char peek(stack_t *stack)
{
    if(!is_empty(stack))
    {
        return stack->arr[stack->top];
    }
    else
    {
        printf("Stack empty\n");
        return '\0';
    }
}

int is_empty(stack_t *stack)
{
    return stack->top == -1;
}

int is_full(stack_t *stack)
{
    return stack->top + 1 == MAXSIZE;
}