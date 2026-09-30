#include <stdio.h>
#include "dllc.h" 

int main()
{
	dll_t q;
	init_dll(&q);
	int opt;
	int key;
	printf("opt : 1 : enque; 2 : deque ; 3 : disp forward "
		"4 : disp backward 0 : quit\n");
	scanf("%d", &opt);
	while(opt)
	{
		switch(opt)
		{
			case 1 : scanf("%d", &key);
					 add_current(&q, key);

					 break;
			case 2 : key = delete_current(&q);
					 printf("removing : %d\n", key);
 					 break;
			case 3 : disp_forward(&q); break;
			case 4 : disp_backward(&q); break;

		}
		printf("opt : 1 : enque; 2 : deque ; 3 : disp forward "
			"4 : disp backward 0 : quit\n");
		scanf("%d", &opt);
	}
	deinit_dll(&q);
}