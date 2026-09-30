#ifndef LIST_H
#define LIST_H
#include "rect.h"

struct node
{
	rect r;
	struct node *next_;
};
typedef struct node node_t;


struct mylist
{
	node_t *head_;
};
typedef struct mylist mylist_t;

void init_list(mylist_t*);
void insert_list(mylist_t*, int l, int b);
void disp_list(mylist_t*);
void free_list(mylist_t*);

int total_value(mylist_t*, int unit_value);
void max_length_site(mylist_t*);
void min_breadth_site(mylist_t*);

#endif


