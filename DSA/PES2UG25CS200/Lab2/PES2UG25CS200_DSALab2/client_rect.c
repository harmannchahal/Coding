#include <stdio.h>
#include "rect.h"

int main(void){
	rect r;
	int l, b, area;
	printf("Enter Length and Breadth of Rectangle: ");
	scanf("%d %d", &l, &b);
	CS200_init(&r, l, b);
	area = CS200_area(&r);
	CS200_disp(&r, area);
} 
