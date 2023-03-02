/* Convert Fahrenheit to Celsius temperature */

#include <stdio.h>

int main()
{
    float c, f;

    printf("enter fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;

    printf("celcius is %.2f", c);

    return 0;
}