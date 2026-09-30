#include <stdio.h>
#include "dll.h"

int main()
{
	dll_t my_dll;
	int val;
	init(&my_dll);
	int opt;
	printf("enter option 1 : add in the begin\n "
		   "enter option 2 : add at the end\n "
		   "enter option 3 : remove from begin\n"
		   "enter option 4 : remove from end\n"
		   "enter option 5 : display forward\n" 
		   "enter option 6 : display backward\n"
		   "enter option 0 to stop : ");
	scanf("%d", &opt);
	while(opt)
	{
		switch(opt)
		{
			case 1 : 	scanf("%d", &val);
						add_in_begin(&my_dll, val);
						break;
			case 2 : 	scanf("%d", &val);
						add_at_end(&my_dll, val);
						break;
			case 3 : 	remove_in_begin(&my_dll);
						break;
			case 4 : 	remove_at_end(&my_dll);
						break;
			case 5 :	disp_forward(&my_dll);
						break;
			case 6 :	disp_backward(&my_dll);
						break;
						
		
		}
		printf("enter option 1 : add in the begin\n "
		   "enter option 2 : add at the end\n "
		   "enter option 3 : display forward\n" 
		   "enter option 4 : display backward\n"
		   "enter option 0 to stop : ");
		scanf("%d", &opt);
	}
	disp_forward(&my_dll);
	disp_backward(&my_dll);
}