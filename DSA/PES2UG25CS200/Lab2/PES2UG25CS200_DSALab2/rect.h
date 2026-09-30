#ifndef RECT_H
#define RECT_H

typedef struct rectangle{
	int length;
	int breadth;	
} rect;

void CS200_init(rect *r, int l, int b);
int CS200_area(rect *r);
void CS200_disp(rect *r, int area);

#endif
