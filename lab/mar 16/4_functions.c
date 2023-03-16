/* Write functions for performing the following operations:
    a. Find factorial of a number
    b. Find quotient and reminder of the given two numbers
    c. Find the roots of the quadratic equation */

#include <stdio.h>
#include <math.h>

void factorial(int n)
{
    int fact = 1, i;
    for (i = 1; i <= n; i++)
        fact = fact * i;
    printf("factorial of %d is %d", n, fact);
}
void qr(int n1, int n2)
{
    int q, r;
    q = n1 / n2;
    r = n1 % n2;
    printf("quotient is %d\nremainder is %d", q, r);
}
void roots(float a, float b, float c)
{
    float x, y, disc;
    disc = b * b - (4.0 * a * c);
    x = (-b + sqrt(disc)) / (2.0 * a);
    y = (-b - sqrt(disc)) / (2.0 * a);
    printf("the roots are %.2f and %.2f", x, y);
}

int main()
{
    int user, a, b;
    float d, e, f;
    printf("1 - factorial\n2 - quotient and remainder\n3 - roots\nenter an option: ");
    scanf("%d", &user);
    switch (user)
    {
        case 1:
            printf("enter a number: ");
            scanf("%d", &a);
            factorial(a);
            break;
        case 2:
            printf("enter number 1: ");
            scanf("%d", &a);
            printf("enter number 2: ");
            scanf("%d", &b);
            qr(a, b);
            break;
        case 3:
            printf("enter the value of a: ");
            scanf("%f", &d);
            printf("enter the value of b: ");
            scanf("%f", &e);
            printf("enter the value of c: ");
            scanf("%f", &f);
            roots(d, e, f);
            break;
        default:
            printf("not a valid number");
            break;
    }

    return 0;
}