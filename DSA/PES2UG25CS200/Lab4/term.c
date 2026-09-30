#include <stdio.h>
#include <stdlib.h>
#include "term.h"

term_t *create_term(double coeff, int exp)
{
    term_t *new_term;

    new_term = (term_t *)malloc(sizeof(term_t));

    if (new_term == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    new_term->coeff = coeff;
    new_term->exp = exp;
    new_term->next = NULL;

    return new_term;
}

void print_term(term_t *ptr_term, int is_first)
{
    double coeff = ptr_term->coeff;
    int exp = ptr_term->exp;

    if (!is_first)
    {
        if (coeff >= 0)
        {
            printf(" + ");
        }
        else
        {
            printf(" - ");
            coeff = -coeff;
        }
    }
    else if (coeff < 0)
    {
        printf("-");
        coeff = -coeff;
    }

    if (exp == 0)
    {
        if (coeff == (int)coeff)
            printf("%.0lf", coeff);
        else
            printf("%.2lf", coeff);
    }
    else if (exp == 1)
    {
        if (coeff == 1)
            printf("x");
        else if (coeff == (int)coeff)
            printf("%.0lfx", coeff);
        else
            printf("%.2lfx", coeff);
    }
    else
    {
        if (coeff == 1)
            printf("x^%d", exp);
        else if (coeff == (int)coeff)
            printf("%.0lfx^%d", coeff, exp);
        else
            printf("%.2lfx^%d", coeff, exp);
    }
}

void integrate_term(term_t *ptr_term, term_t *ptr_integrated_term)
{
    if (ptr_term->exp == -1)
    {
        printf("Error: exponent -1 cannot be integrated using the power rule.\n");
        exit(1);
    }

    ptr_integrated_term->coeff =
        ptr_term->coeff / (ptr_term->exp + 1);

    ptr_integrated_term->exp =
        ptr_term->exp + 1;

    ptr_integrated_term->next = NULL;
}