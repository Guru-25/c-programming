/* Print the Fibonacci series up to the limit and display the sum of all the numbers */

#include <stdio.h>

int main()
{
    int n, x = 0, y = 1, z, sum = 0;
    printf("enter number of series should be generated: ");
    scanf("%d", &n);
    printf("%d ", x);
    printf("%d ", y);
    
    int i;
    for (i = 2 ; i < n ; i++)
    {
        z = x+y;
        x = y;
        y = z;
        printf("%d ", z);
        sum = sum + z;
    }
    printf("\nsum is %d\n", sum+1);

    return 0;
}