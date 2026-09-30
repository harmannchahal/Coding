#include <stdio.h>
#include <math.h>
#include <string.h>
#include "stack.h"

// evaluate expression in postfix
int main()
{
	while(1) {
	char str[MAXSIZE + 1]; char *s = str;
	printf("enter the string / enter exit to exit: ");
	gets(str);
	if (!strcmp(s, "exit")) { printf("Exiting...\n"); break; }
	printf("input expression : :%s:\n", s);
	stack_t mystack;
	init_stack(&mystack);
	
	char ch;
	int val1; int val2;
	int val = 0;
	int is_num = 0;
	while( (ch = *s++) != '\0')
	{
		if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
		{
			if (is_empty(&mystack)){ printf("Error: stack underflow\n"); return 1; }
			val1 = pop(&mystack);
			if (is_empty(&mystack)){ printf("Error: stack underflow\n"); return 1; }
			val2 = pop(&mystack);
			switch(ch)
			{
				case '^' : push(&mystack, pow(val2, val1));
					   break;
				case '+' : push(&mystack,val2 + val1);
					   break;
				case '-' : push(&mystack,val2 - val1);
					   break;
				case '*' : push(&mystack,val2 * val1);
					   break;
				case '/' : if (val1 == 0){ printf("Error: Division by Zero\n"); return 1; }
					   push(&mystack,val2 / val1);
					   break;
			}
		}
		else if(ch >= '0' && ch <= '9')
		{
			is_num = 1;
			val = val * 10 + ch - '0';
		}
		else if (ch == ' ' && is_num)
		{
			printf("pushing %d\n", val);
			push(&mystack, val);
			val = 0;
			is_num = 0;
		}
	}
	printf("result : %d\n", pop(&mystack));
	deinit_stack(&mystack);
	}
}