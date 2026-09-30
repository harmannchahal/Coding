#ifndef CLIST_H
#define CLIST_H

#define MAX_LEN 64

typedef enum {
    MODE_NUMBERS = 1,
    MODE_NAMES = 2
} mode_t;

typedef struct node {
    int val;
    char name[MAX_LEN];
    struct node *next;
} node_t;

typedef struct clist {
    node_t *cur;
    char last_removed_str[MAX_LEN];
    int last_removed_val;
} clist_t;

void init(clist_t *lst);
void add_person(clist_t *lst, int val, const char *str);
int delete_next(clist_t *lst);
int find_kth(clist_t *lst, int k);
void deinit(clist_t *lst);

#endif