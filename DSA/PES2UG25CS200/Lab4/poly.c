#include <stdio.h>
#include <stdlib.h>
#include "poly.h"

poly_t create_poly(void)
{
    poly_t poly = NULL;
    term_t *last = NULL;
    term_t *new_term;

    int n;
    int i;
    double coeff;
    int exp;

    printf("Number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Coefficient Exponent: ");
        scanf("%lf %d", &coeff, &exp);

        new_term = create_term(coeff, exp);

        if (poly == NULL)
        {
            poly = new_term;
        }
        else
        {
            last->next = new_term;
        }

        last = new_term;
    }

    return poly;
}

void display_poly(poly_t poly)
{
    term_t *current = poly;
    int is_first = 1;

    if (poly == NULL)
    {
        printf("0\n");
        return;
    }

    while (current != NULL)
    {
        print_term(current, is_first);

        is_first = 0;
        current = current->next;
    }

    printf("\n");
}

void add_poly(poly_t poly1, poly_t poly2, poly_t *sum)
{
    term_t *p1 = poly1;
    term_t *p2 = poly2;

    term_t *new_term;
    term_t *last = NULL;

    double coeff;

    *sum = NULL;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->exp == p2->exp)
        {
            coeff = p1->coeff + p2->coeff;

            if (coeff != 0)
            {
                new_term = create_term(coeff, p1->exp);

                if (*sum == NULL)
                    *sum = new_term;
                else
                    last->next = new_term;

                last = new_term;
            }

            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->exp > p2->exp)
        {
            new_term = create_term(p1->coeff, p1->exp);

            if (*sum == NULL)
                *sum = new_term;
            else
                last->next = new_term;

            last = new_term;
            p1 = p1->next;
        }
        else
        {
            new_term = create_term(p2->coeff, p2->exp);

            if (*sum == NULL)
                *sum = new_term;
            else
                last->next = new_term;

            last = new_term;
            p2 = p2->next;
        }
    }

    while (p1 != NULL)
    {
        new_term = create_term(p1->coeff, p1->exp);

        if (*sum == NULL)
            *sum = new_term;
        else
            last->next = new_term;

        last = new_term;
        p1 = p1->next;
    }

    while (p2 != NULL)
    {
        new_term = create_term(p2->coeff, p2->exp);

        if (*sum == NULL)
            *sum = new_term;
        else
            last->next = new_term;

        last = new_term;
        p2 = p2->next;
    }
}

void destroy_poly(poly_t *poly)
{
    term_t *current = *poly;
    term_t *temp;

    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }

    *poly = NULL;
}

double eval_poly(poly_t poly, double x)
{
    term_t *current = poly;
    double result = 0.0;
    double power;
    int i;

    while (current != NULL)
    {
        power = 1.0;

        for (i = 0; i < current->exp; i++)
        {
            power = power * x;
        }

        result = result + current->coeff * power;

        current = current->next;
    }

    return result;
}

poly_t integrate_poly(poly_t poly)
{
    poly_t integrated_poly = NULL;

    term_t *current = poly;
    term_t *last = NULL;
    term_t *new_term;

    while (current != NULL)
    {
        new_term = create_term(0.0, 0);

        integrate_term(current, new_term);

        if (integrated_poly == NULL)
        {
            integrated_poly = new_term;
        }
        else
        {
            last->next = new_term;
        }

        last = new_term;
        current = current->next;
    }

    return integrated_poly;
}