/* Write a menu driven program to do various math operations (use predefined function) */

#include <stdio.h>
#include <math.h>

void power()
{
    float b, p;
    printf("enter base: ");
    scanf("%f", &b);
    printf("enter power: ");
    scanf("%f", &p);
    printf("%.2f to the power of %.2f is %.2f", b, p, pow(b, p));
}
void square_root()
{
    float n;
    printf("enter a number: ");
    scanf("%f", &n);
    printf("square root of %.2f is %.2f", n, sqrt(n));
}
void ceil_floor()
{
    float n;
    printf("enter a number: ");
    scanf("%f", &n);
    printf("ceil is %.2f\nfloor is %.2f", ceil(n), floor(n));
}
void log_func()
{
    float n;
    printf("enter a number: ");
    scanf("%f", &n);
    printf("log of %.2f is %.2f", n, log(n));
}
void exponential()
{
    float n;
    printf("enter a number: ");
    scanf("%f", &n);
    printf("exponential of %.2f is %.2f", n, exp(n));
}

int main()
{
    int user;
    printf("1 - Power\n2 - Square Root\n3 - Ceil and Floor\n4 - Log\n5 - Exponential\nEnter a number to do operation: ");
    scanf("%d", &user);
    switch (user)
    {
        case 1:
            power();
            break;
        case 2:
            square_root();
            break;
        case 3:
            ceil_floor();
            break;
        case 4:
            log_func();
            break;
        case 5:
            exponential();
            break;
        default:
            printf("not a valid number");
            break;
    }
    return 0;
}