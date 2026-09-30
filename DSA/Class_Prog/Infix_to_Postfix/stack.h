#ifndef STACK_H
#define STACK_H

#define MAXSIZE 100

struct stack
{
    char arr[MAXSIZE];
    int top;
};
typedef struct stack stack_t;

void init_stack(stack_t *s);
void deinit_stack(stack_t *s);
void push(stack_t *s, char x);
char pop(stack_t *s);
char peek(stack_t *s);
int is_empty(stack_t *s);
int is_full(stack_t *s);

#endif