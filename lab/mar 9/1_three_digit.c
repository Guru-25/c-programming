/* Print 10 three digit numbers that are starts and ends with same number. Get numbers from the user input */

#include <stdio.h>

int main()
{
    int num;
    printf("enter a 3 digit starting number: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999)
    {
        int count = 0;
        while (count < 10)
        {
            if (num / 100 == num % 10)
            {
                printf("%d ", num);
                count++;
                num++;
            }
            else
                num++;
        }
    }
    else
        printf("number is not 3 digit");


    return 0;
}