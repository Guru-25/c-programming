/* Find the given year is a leap year or not */

#include <stdio.h>

int main()
{
    int year;

    printf("enter year: ");
    scanf("%d", &year);

    if ((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0)))
        printf("yes, it is leap year");
    else
        printf("no, it is not leap year");

    return 0;
}