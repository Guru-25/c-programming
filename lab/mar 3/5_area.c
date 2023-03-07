/*Consider a rectangle land includes a circle pond with a diameter of D. Find the areas of total land, pond and excluding the pond. */

#include <stdio.h>

int main()
{
    float l, b, land_area, pond_area, total_area;

    printf("enter length of the land: ");
    scanf("%f", &l);
    printf("enter breadth of the land: ");
    scanf("%f", &b);

    pond_area = 3.14 * ((b / 2.0) * (b / 2.0));
    land_area = l * b;

    total_area = land_area - pond_area;

    printf("total area is %.2f", total_area);

    return 0;
}