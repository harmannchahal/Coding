#include <stdio.h>
#include "list.h"

int main(void){
	mylist_t rect_list;
	int n, l, b, unit_value, value;

	init_list(&rect_list);

	printf("Enter number of sites: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		printf("Enter length and breadth of site %d: ", i + 1);
		scanf("%d %d", &l, &b);
		insert_list(&rect_list, l, b);
	}

	printf("\nOrdered list of sites by area:\n");
	disp_list(&rect_list);

	printf("\nEnter unit area value: ");
	scanf("%d", &unit_value);
	value = total_value(&rect_list, unit_value);
	printf("Total layout value: %d\n", value);

	max_length_site(&rect_list);
	min_breadth_site(&rect_list);

	free_list(&rect_list);
	return 0;
}
