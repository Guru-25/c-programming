/* Convert the given time from 24hour clock to 12hour clock (get hour and minutes as input) */

#include <stdio.h>

int main()
{
    int hour, minutes, time;

    printf("enter hour: ");
    scanf("%d", &hour);
    printf("enter minutes: ");
    scanf("%d", &minutes);

    if (hour > 0 && hour < 12)
        printf("%d:%d am\n",hour, minutes);
    else if (hour > 12 && hour < 24)
    {
        time = hour - 12;
        printf("%d:%d pm\n", time, minutes);
    }
    else if (hour == 0)
        printf("12:%d am\n", minutes);
    else if (hour == 12)
        printf("12:%d pm\n", minutes);
    else
        printf("please enter valid hour\n");

    return 0;
}