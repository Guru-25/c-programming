#include <stdio.h>

int main()
{
    float rain[5][12] =
        {
            {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
            {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
            {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
            {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
            {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
        };

    printf("YEAR\tRAINFALL (inches)\n");
    
    float yearTot = 0;
    int i, j;

    for (i = 0 ; i < 5 ; i++)
    {
        float sum = 0;
        for (j = 0 ; j < 12 ; j++)
        {
            sum = sum + rain[i][j];
        }
        printf("%d\t%.1f\n", 2010+i, sum);
        yearTot = yearTot + sum;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", yearTot / 5);
    printf("MONTHY AVERAGES:\n\n");
    printf("Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");

    for (i = 0 ; i < 12 ; i++)
    {
        float newSum = 0;
        for (j = 0 ; j < 5 ; j++)
        {
            newSum += rain[j][i];
        }
        printf("%.1f\t", newSum / 5);
    }

    return 0;
}

