/* Store the first name and last name of your friends in an 3D array namely Fname[2][10][30]. Display the first name and last name together. */

#include <stdio.h>
#include <string.h>

int main()
{
    char name[2][10][30];
    int i, j;
    printf("Enter the first and last name of 10 friends:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Friend %d: ", i + 1);
        scanf("%s %s", name[0][i], name[1][i]);
    }
    printf("First and last name of friends:\n");
    for (i = 0; i < 10; i++)
        printf("%s %s\n", name[0][i], name[1][i]);
    return 0;
}
