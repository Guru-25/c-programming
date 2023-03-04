/* Convert minutes to years and days */

#include <stdio.h>

int main()
{
    int minutes;
    double days, years;
    printf("enter minutes: ");
    scanf("%d", &minutes);
    days = minutes / (24.0 * 60.0);
    years = minutes / (365.0 * 24.0 * 60.0);
    printf("days: %f\n", days);
    printf("years: %f\n", years);

    return 0;
}