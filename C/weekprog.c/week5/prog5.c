#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;
    int rowsum, colsum;
    int mainDiag = 0, secDiag = 0;

    printf("Enter elements of 3 x 3 matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Row sums
    printf("\nSum of each row:\n");
    for(i = 0; i < 3; i++)
    {
        rowsum = 0;
        for(j = 0; j < 3; j++)
        {
            rowsum += a[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, rowsum);
    }

    // Column sums
    printf("\nSum of each column:\n");
    for(j = 0; j < 3; j++)
    {
        colsum = 0;
        for(i = 0; i < 3; i++)
        {
            colsum += a[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, colsum);
    }

    // Diagonal sums
    for(i = 0; i < 3; i++)
    {
        mainDiag += a[i][i];         
        secDiag  += a[i][2 - i];    
    }

    printf("\nSum of main diagonal elements = %d\n", mainDiag);
    printf("Sum of secondary diagonal elements = %d\n", secDiag);

    return 0;
}