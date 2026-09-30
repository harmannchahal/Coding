#include <stdio.h>
#include "clist.h"

int main(void) {
    int choice;
    printf("1. Numbers\n");
    printf("2. Names\n");
    printf("Select mode (1 or 2): ");
    
    if (scanf("%d", &choice) != 1 || (choice != MODE_NUMBERS && choice != MODE_NAMES)) {
        printf("Invalid choice. Exiting.\n");
        return 1;
    }

    int n, k;
    printf("Enter total count (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid count. Exiting.\n");
        return 1;
    }

    printf("Enter step value (k): ");
    if (scanf("%d", &k) != 1 || k < 1) {
        printf("Invalid step size. Exiting.\n");
        return 1;
    }

    clist_t lst;
    init(&lst);

    if (choice == MODE_NUMBERS) {
        printf("\nEnter %d numbers:\n", n);
        for (int i = 1; i <= n; i++) {
            int num;
            printf("Number %d: ", i);
            scanf("%d", &num);
            add_person(&lst, num, "");
        }
    } else {
        printf("\nEnter %d names:\n", n);
        for (int i = 1; i <= n; i++) {
            char name[MAX_LEN];
            printf("Name %d: ", i);
            scanf("%s", name);
            add_person(&lst, i, name);
        }
    }

    printf("\n--- Eliminations ---\n");
    for (int round = 1; round < n; round++) {
        find_kth(&lst, k);
        if (choice == MODE_NUMBERS) {
            printf("Round %d: Number %d removed\n", round, lst.last_removed_val);
        } else {
            printf("Round %d: Name %s (#%d) removed\n", round, lst.last_removed_str, lst.last_removed_val);
        }
    }

    printf("\n--- Winner ---\n");
    if (lst.cur) {
        if (choice == MODE_NUMBERS) {
            printf("Winner: Number %d\n", lst.cur->val);
        } else {
            printf("Winner: Name %s (#%d)\n", lst.cur->name, lst.cur->val);
        }
    }

    deinit(&lst);
    return 0;
}