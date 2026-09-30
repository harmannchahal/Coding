#include <stdio.h>

int main() {
    int month = 0, N;
    float P, r, E, interest, totalInt = 0, penalty = 0;

    printf("Enter Principal (P): ");
    scanf("%f", &P);
    printf("Enter Monthly Interest Rate (r in %%): ");
    scanf("%f", &r);
    printf("Enter EMI (E): ");
    scanf("%f", &E);
    printf("Enter Max Months (N): ");
    scanf("%d", &N);

    printf("Month-wise Outstanding:\n");

    while (P > 0 && month < N) {
        interest = P * r / 100;
        totalInt += interest;

        if (E < interest)
            penalty += 200;

        P = P + interest - E;
        if (P < 0) P = 0;

        month++;
        printf("Month %d Outstanding = %.2f\n", month, P);
    }

    printf("----- Summary -----\n");
    printf("Total Interest Paid: %.2f\n", totalInt);
    printf("Total Penalties: %.2f\n", penalty);
    printf("Months Processed: %d\n", month);

    if (P == 0)
        printf("Loan Status: CLOSED\n");
    else
        printf("Loan Status: NOT CLOSED\nRemaining Principal: %.2f\n", P);
    return 0;
}