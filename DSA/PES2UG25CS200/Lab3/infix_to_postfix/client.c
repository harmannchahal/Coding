#include <stdio.h>
#include <ctype.h>
#include "stack.h"

int precedence(char ch)
{
	int prec;
	switch(ch)
	{
		case '^' : prec = 4; break;
		case '(' : prec = 3; break;
		case '*' :
		case '/' : prec = 2; break;
		case '+' :
		case '-' : prec = 1; break;
	}
	return prec;
}

int main()
{
	char in[MAXSIZE + 1]; char *s = in;
	char post[MAXSIZE + 1]; char *p = post;
	printf("enter the expression:"); 
	scanf("%s",in);
	printf("input expression :%s\n", s);
	stack_t mystack;
	init_stack(&mystack);
	
	char ch;
	char ch1;
	while( (ch = *s++) != '\0')
	{
		
		if(ch == ')')
		{
			while( (ch1 = pop(&mystack) ) != '(')
			{
				*p++ = ch1;
				*p++ = ' ';
			}
		}
		else if(ch == '(' || ch == '+' || ch == '-' ||
			ch == '*' || ch == '/' || ch == '^')
		{
			if(is_empty(&mystack))
			{
				push(&mystack, ch);
			}
			else
			{
				while(!is_empty(&mystack) && peek(&mystack) != '(' &&
					precedence(ch) <= precedence(peek(&mystack)) && ch != '^')
				{
					*p++ = pop(&mystack);	
					*p++ = ' ';
					
				}
				push(&mystack, ch);
			}
		}

		else 
		{
   			*p++ = ch;
    			while (isalnum(*s))
    			{
        			*p++ = *s++;
    			}
    			*p++ = ' ';
		}

	}
	while(! is_empty(&mystack))
	{
		*p++ = pop(&mystack);
		*p++ = ' ';
	}
	*p = '\0';
	
	printf("infix : %s\n", in);
	printf("postfix : %s\n", post);
	deinit_stack(&mystack);
	
}
