/* Determine the simple interest for the given Principal, time and rate of Interest */

#include <stdio.h>

int main()
{
    int p, t, r;
    float si;

    printf("enter principle: ");
    scanf("%d", &p);
    printf("enter time (years): ");
    scanf("%d", &t);
    printf("enter rate of interest (%%): ");
    scanf("%d", &r);

    si = (p * t * r) / 100;

    printf("simple interest is %.2f\n", si);

    return 0;
}