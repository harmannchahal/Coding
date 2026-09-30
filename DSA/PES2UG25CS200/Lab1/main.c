#include <stdio.h>
#include "eventlist.h"

int main(void)
{
    event_t events[MAX_EVENTS];
    int count;
    int month;

    FILE *fp = fopen("events.txt", "r");

    if (fp == NULL)
    {
        printf("Could not open events.txt\n");
        return 1;
    }

    count = read_all(fp, events, MAX_EVENTS);

    fclose(fp);

    printf("Read %d events:\n\n", count);

    printf("All Events:\n");
    disp_all(events, count);

    if (count > 0)
    {
        event_t latest = find_latest(events, count);

        printf("\nLatest Event:\n");
        disp_event(&latest);
    }

    printf("\nEnter month number to count events: ");
    scanf("%d", &month);

    printf("%d event(s) found in month %d.\n",
           count_in_month(events, count, month), month);

    return 0;
}