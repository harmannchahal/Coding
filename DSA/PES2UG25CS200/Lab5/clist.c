#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "clist.h"

void init(clist_t *lst) {
    if (!lst) return;
    lst->cur = NULL;
    lst->last_removed_str[0] = '\0';
    lst->last_removed_val = 0;
}

void add_person(clist_t *lst, int val, const char *str) {
    node_t *p = (node_t *)malloc(sizeof(node_t));
    if (!p) return;

    p->val = val;
    if (str) {
        strncpy(p->name, str, MAX_LEN - 1);
        p->name[MAX_LEN - 1] = '\0';
    } else {
        p->name[0] = '\0';
    }

    if (lst->cur == NULL) {
        lst->cur = p;
        p->next = p;
    } else {
        p->next = lst->cur->next;
        lst->cur->next = p;
        lst->cur = p;
    }
}

int delete_next(clist_t *lst) {
    if (!lst || !lst->cur) return -1;

    node_t *temp = lst->cur->next;
    int res = temp->val;

    lst->last_removed_val = temp->val;
    strncpy(lst->last_removed_str, temp->name, MAX_LEN - 1);
    lst->last_removed_str[MAX_LEN - 1] = '\0';

    if (temp == lst->cur) {
        lst->cur = NULL;
    } else {
        lst->cur->next = temp->next;
    }

    free(temp);
    return res;
}

int find_kth(clist_t *lst, int k) {
    if (!lst || !lst->cur || k < 1) return -1;

    for (int i = 0; i < k - 1; i++) {
        lst->cur = lst->cur->next;
    }

    return delete_next(lst);
}

void deinit(clist_t *lst) {
    if (!lst) return;
    while (lst->cur != NULL) {
        delete_next(lst);
    }
}