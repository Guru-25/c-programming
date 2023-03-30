/* Perform matrix multiplication */

#include <stdio.h>

int main()
{
    int r1, c1, r2, c2, i, j, k;

    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d %d", &r2, &c2);

    int m1[r1][c1], m2[r2][c2], result[r1][c2];

    printf("Enter the elements of matrix 1: \n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++)
            scanf("%d", &m1[i][j]);
    }

    printf("Enter the elements of matrix 2: \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
            scanf("%d", &m2[i][j]);
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < c1; k++)
                result[i][j] += m1[i][k] * m2[k][j];
        }
    }

    printf("The result of matrix multiplication is: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}



