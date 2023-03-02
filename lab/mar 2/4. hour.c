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
        printf("%d:%d am",hour, minutes);
    else if (hour > 12 && hour < 24)
    {
        time = hour - 12;
        printf("%d:%d pm", time, minutes);
    }
    else if (hour == 0)
        printf("12:%d am", minutes);
    else if (hour == 12)
        printf("12:%d pm", minutes);
    else
        printf("please enter valid hour");

    return 0;
}