#include <stdio.h>

int main()
{
    int count = 0, sum = 0, n;

    printf("enter a starting number: ");
    scanf("%d", &n);
    printf("even numbers that are divisible by 3 are:\n");

    while (count < 10)
    {
        if (n % 2 == 0 && n % 3 == 0)
        {
            printf("%d ", n);
            
            sum = sum + n;
            n++;
            count++;
            continue;
        }
        else
            n++;
    }
    printf("\ntheir sum is %d", sum);

    return 0;
}