#include <stdio.h>
#include "eventlist.h"

int read_all(FILE *fp, event_t e[], int n)
{
    int count = 0;

    while (count < n)
    {
        if (fscanf(fp, "%d-%d-%d %99s", &e[count].date_.dd_, &e[count].date_.mm_, &e[count].date_.yy_, e[count].detail_) != 4)
        {
            break;
        }

        count++;
    }

    return count;
}

void disp_all(event_t e[], int n)
{
    for (int i = 0; i < n; i++)
    {
        disp_event(&e[i]);
    }
}

event_t find_latest(event_t e[], int n)
{
    int latest = 0;

    for (int i = 1; i < n; i++)
    {
        int current_date = e[i].date_.yy_ * 10000
                         + e[i].date_.mm_ * 100
                         + e[i].date_.dd_;

        int latest_date = e[latest].date_.yy_ * 10000
                        + e[latest].date_.mm_ * 100
                        + e[latest].date_.dd_;

        if (current_date > latest_date)
        {
            latest = i;
        }
    }

    return e[latest];
}

int count_in_month(event_t e[], int n, int month)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (e[i].date_.mm_ == month)
        {
            count++;
        }
    }

    return count;
}