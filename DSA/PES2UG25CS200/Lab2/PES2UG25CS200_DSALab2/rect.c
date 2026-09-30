#include <stdio.h>
#include "rect.h"

void CS200_init(rect *r, int l, int b) {
	r->length = l;
	r->breadth = b;
}

int CS200_area(rect *r) {
	return (r->length * r->breadth);
}

void CS200_disp(rect *r, int area){
	printf("Length: %d\nBreadth: %d\nArea: %d\n", r->length, r->breadth, area);
}

