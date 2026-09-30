#include <stdio.h>
#include <stdlib.h>
#include "dllc.h"

void init_dll(dll_t *ptr_dll)
{
	ptr_dll->current_ = NULL;
}

void deinit_dll(dll_t *ptr_dll)
{
	node_t* pres = ptr_dll->current_;
    if(pres == NULL)
        return;
	do
	{
		node_t* temp = pres;
		pres = pres->next_;
		free(temp);
	} while(pres != ptr_dll-> current_);
	ptr_dll->current_ = NULL;
}

/* Create a new node */
static node_t* create_node(int key)
{
    node_t *temp;
    temp = (node_t*)malloc(sizeof(node_t));

	// one of the possible ways of handling an exceptional case
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    temp->key_ = key;
    return temp;
}

/* add at the current position */
void add_current(dll_t *ptr_dll, int key)
{
    node_t *temp = create_node(key);
	if(ptr_dll->current_ == NULL)
	{
		temp->next_ = temp;
		temp->prev_ = temp;
		ptr_dll->current_ = temp;
	}
	else 
	{
		temp->next_ = ptr_dll->current_;
		temp->prev_ = ptr_dll->current_->prev_;
		temp->next_->prev_ = temp;
		temp->prev_->next_ = temp;
	}
}



/* Display from left to right */
void disp_forward(dll_t *ptr_dll)
{
    node_t *temp = ptr_dll->current_;
    printf("Forward: ");
	if(temp != NULL)
	{
		do
		{
			printf("%d ", temp->key_);
			temp = temp->next_;
		} while (temp != ptr_dll->current_);
	}
    printf("\n");
}

/* Display from right to left */
void disp_backward(dll_t *ptr_dll)
{
    node_t *temp = ptr_dll->current_;
    printf("Backward: ");
	if(temp != NULL)
	{
		do
		{
			printf("%d ", temp->key_);
			temp = temp->prev_;
		} while (temp != ptr_dll->current_);
	}
    printf("\n");
}

/* Delete current */
int delete_current(dll_t *ptr_dll)
{
    node_t *temp = ptr_dll->current_;

    if (temp == NULL) {
        printf("List is empty\n");
        exit(1);
    }
	int key = temp->key_;
	if(temp == temp->next_)
	{
		ptr_dll->current_ = NULL; 
	}
	else 
	{
		ptr_dll->current_ = temp->next_;
		temp->next_->prev_ = temp->prev_;
		temp->prev_->next_ = temp->next_;
	}
	
	free(temp);
	return key;
}



