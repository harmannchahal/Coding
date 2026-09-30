#ifndef STACK_H
#define STACK_H

#define MAX 100

struct stack
{
    char arr[MAX];
    int top;
};

typedef struct stack stack_t;

void init_stack(stack_t *stack);
void deinit_stack(stack_t *stack);

void push(stack_t *stack, char ch);
char pop(stack_t *stack);
char peek(stack_t *stack);

int is_empty(stack_t *stack);
int is_full(stack_t *stack);

#endif