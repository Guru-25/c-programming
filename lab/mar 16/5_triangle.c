/* Write a function to check whether a triangle can be formed by given values of the three angles */

#include <stdio.h>

int triangle(int v1, int v2, int v3)
{
    if (v1 + v2 + v3 == 180)
        printf("a triangle can be formed by given values of the three angles");

    else
        printf("a triangle cannot be formed by given values of the three angles");
    
    return 0;
}

int main()
{
    int a1, a2, a3;
    printf("enter angle 1: ");
    scanf("%d", &a1);
    printf("enter angle 2: ");
    scanf("%d", &a2);
    printf("enter angle 3: ");
    scanf("%d", &a3);

    triangle(a1, a2, a3);

    return 0;
}