/* Find the last digit of the given number */

#include <stdio.h>

int main()
{
    int num, last_digit;

    printf("enter number: ");
    scanf("%d", &num);

    last_digit = num % 10;

    printf("last digit is %d\n", last_digit);

    return 0;
}