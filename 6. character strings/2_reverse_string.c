/* Utilizing common string functions */

#include <stdio.h>
#include <string.h>

int main()
{
    char string[100], result[100] = "";
    

    printf("enter a string to reverse: ");
    gets(string);

    /* hello = olleh
    01234 = 01234 */

    int i = 0;
    while (string[i] != '\0')
    {
        result[i] = string[(strlen(string) - 1) - i];
        i++;
    }

    printf("reverse of %s is %s\n", string, result);

    return 0;
}