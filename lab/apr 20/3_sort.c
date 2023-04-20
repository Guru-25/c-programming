/* Sort the given name list in reverse alphabetical order */

#include <stdio.h>
#include <string.h>

int main() 
{
    int i, j, n;
    char names[10][30], temp[30];
    printf("Enter the number of names (maximum 10): ");
    scanf("%d", &n);
    printf("Enter %d names: \n", n);
    for (i = 0; i < n; i++)
        scanf("%s", names[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(names[i], names[j]) < 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("Names in reverse alphabetical order:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", names[i]);
    return 0;
}
