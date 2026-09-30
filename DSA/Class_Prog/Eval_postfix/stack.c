#include <stdio.h>
#include "stack.h"

void init_stack(stack_t *s)
{
    s->top = -1;
}

void deinit_stack(stack_t *s)
{
    s->top = -1;
}

void push(stack_t *s, int x)
{
    if(!is_full(s))
    {
        s->arr[++s->top] = x;
    }
    else
    {
        printf("stack full; cannot push\n");
    }
}

int pop(stack_t *s)
{
    if(!is_empty(s))
    {
        return s->arr[s->top--];
    }
    else
    {
        printf("stack empty; cannot pop\n");
        return 0;
    }
}

int peek(stack_t *s)
{
    if(!is_empty(s))
    {
        return s->arr[s->top];
    }
    else
    {
        printf("stack empty; cannot peek\n");
        return 0;
    }
}

int is_empty(stack_t *s)
{
    return s->top == -1;
}

int is_full(stack_t *s)
{
    return s->top + 1 == MAXSIZE;
}