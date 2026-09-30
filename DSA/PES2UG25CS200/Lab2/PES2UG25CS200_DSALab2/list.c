#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void init_list(mylist_t* rect_list){
	rect_list->head_ = NULL;
}

void insert_list(mylist_t* rect_list, int l, int b){
	node_t* temp = (node_t*)malloc(sizeof(node_t));
	CS200_init(&temp->r, l, b);
	temp->next_ = NULL;

	if(rect_list->head_ == NULL)
	{
		rect_list->head_ = temp;
		temp->next_ = NULL;
	}
	else
	{
		node_t* prev = NULL;
		node_t* pres = rect_list->head_;
		while(pres != NULL && CS200_area(&pres->r) < CS200_area(&temp->r))
		{
			prev = pres;
			pres = pres->next_;
		}
		if(prev == NULL)
		{
			temp->next_ = pres;
			rect_list->head_ = temp;
		}
		else
		{
			temp->next_ = pres;
			prev->next_ = temp;
		}
		
	}


}

void disp_(node_t* q){
	while(q != NULL)
	{
		CS200_disp(&q->r, CS200_area(&q->r));
		printf("\n");
		q = q->next_;
	}
}

void disp_list(mylist_t* rect_list){
	disp_(rect_list->head_);
}

void free_list_(node_t* q){
	node_t* r;
	while(q != NULL)
	{
		r = q->next_;
		free(q);
		q = r;
	}
}

void free_list(mylist_t* rect_list){
	free_list_(rect_list->head_);
}

int total_value(mylist_t* rect_list, int unit_value)
{
	int total = 0;
	node_t* q = rect_list->head_;
	while(q != NULL)
	{
		total += CS200_area(&q->r) * unit_value;
		q = q->next_;
	}
	return total;
}

void max_length_site(mylist_t* rect_list){
	if(rect_list->head_ == NULL) return;

	node_t* q = rect_list->head_;
	node_t* best = q;
	while(q != NULL)
	{
		if(q->r.length > best->r.length)
			best = q;
		q = q->next_;
	}
	printf("Site with highest length:\n");
	CS200_disp(&best->r, CS200_area(&best->r));
	printf("\n");
}

void min_breadth_site(mylist_t* rect_list)
{
	if(rect_list->head_ == NULL) return;

	node_t* q = rect_list->head_;
	node_t* best = q;
	while(q != NULL)
	{
		if(q->r.breadth < best->r.breadth)
			best = q;
		q = q->next_;
	}
	printf("Site with least breadth:\n");
	CS200_disp(&best->r, CS200_area(&best->r));
	printf("\n");
}