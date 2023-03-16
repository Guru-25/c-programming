/* Get 15 different vegetable color. Example: Mango - 'g' for green. Use switch-case and loop to display the total vegetable count in each color. */

#include <stdio.h>

int main()
{
    char color;
    int violet = 0, indigo = 0, blue = 0, green = 0, yellow = 0, orange = 0, red = 0;
    int i = 0;

    for (i = 1; i <= 15; i++)
    {
        printf("enter a color for vegetable %d: ", i);
        scanf(" %c", &color);

        switch (color)
        {
            case 'v':
            case 'V':
                violet++;
                break;
            case 'i':
            case 'I':
                indigo++;
                break;
            case 'b':
            case 'B':
                blue++;
                break;
            case 'g':
            case 'G':
                green++;
                break;
            case 'y':
            case 'Y':
                yellow++;
                break;
            case 'o':
            case 'O':
                orange++;
                break;
            case 'r':
            case 'R':
                red++;
                break;
            default:
                printf("not a valid color\n");
                i--;
        }
    }

    printf("\nTotal count of vegetables by color:\n");
    printf("Violet: %d\n", violet);
    printf("Indigo: %d\n", indigo);
    printf("Blue: %d\n", blue);
    printf("Green: %d\n", green);
    printf("Yellow: %d\n", yellow);
    printf("Orange: %d\n", orange);
    printf("Red: %d\n", red);

    return 0;
}
