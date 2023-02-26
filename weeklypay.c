#include <stdio.h>
#define PAYRATE 12.0
#define PAYRATE_300 .15 // 15.0 / 100.0
#define PAYRATE_450 .20 // 20.0 / 100.0
#define PAYRATE_REST .25 // 25.0 / 100.0

int main()
{
    double hours, grossPay, tax, netPay;

    printf("enter hours: ");
    scanf("%lf", &hours); // long double

    if (hours > 40.0)
        grossPay = (40.0 * PAYRATE) + (hours - 40.0) * (PAYRATE * 1.5);
    else
        grossPay = hours * PAYRATE;

    if ((grossPay > 0.0) && (grossPay <= 300.0))
        tax = grossPay * PAYRATE_300;
    else if ((grossPay > 300.0) && (grossPay <= 450.0))
        tax = (300.0 * PAYRATE_300) + (grossPay - 300.0) * PAYRATE_450;
    else if (grossPay > 450.0)
        tax = (300.0 * PAYRATE_300) + (150.0 * PAYRATE_450) + ((grossPay - 450.0) * PAYRATE_REST);
    else
        tax = 0.0;

    netPay = grossPay - tax;

    printf("gross pay: %.2f\n", grossPay);
    printf("taxes: %.2f\n", tax);
    printf("net pay: %.2f\n", netPay);
    
    return 0;
}
