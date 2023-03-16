/* Write functions for performing the following operations:
    a. Find factorial of a number
    b. Find quotient and reminder of the given two numbers
    c. Find the roots of the quadratic equation */

#include <stdio.h>
#include <math.h>

void factorial()
{
    int fact = 1, n, i;
    printf("\n==Factorial==\n\n");
    printf("enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fact = fact * i;
    printf("factorial of %d is %d\n", n, fact);
}
void qr()
{
    int n1, n2, q, r;
    printf("\n==Quotient and Remainder==\n\n");
    printf("enter number 1: ");
    scanf("%d", &n1);
    printf("enter number 2: ");
    scanf("%d", &n2);
    q = n1 / n2;
    r = n1 % n2;
    printf("quotient is %d\nremainder is %d\n", q, r);
}
void roots()
{
    float x, y, a, b, c, disc;
    printf("\n==Roots==\n\n");
    printf("enter the value of a: ");
    scanf("%f", &a);
    printf("enter the value of b: ");
    scanf("%f", &b);
    printf("enter the value of c: ");
    scanf("%f", &c);
    disc = b * b - (4.0 * a * c);
    x = (-b + sqrt(disc)) / (2.0 * a);
    y = (-b - sqrt(disc)) / (2.0 * a);
    printf("the roots are %.2f and %.2f", x, y);
}

int main()
{
    factorial();
    qr();
    roots();

    return 0;
}