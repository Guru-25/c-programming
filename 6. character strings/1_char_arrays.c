/* Understanding char arrays */

#include <stdio.h>
#include <stdbool.h>

int charCount(char x[])
{
    int i = 0, count = 0;
    while (x[i] != '\0')
    {
        i++;
        count++;
    }
    return count;
}

void concatenate(char result[], const char str1[], const char str2[])
{
    int i = 0, j = 0;
    while (str1[i] != '\0')
    {
        result[j] = str1[i];
        i++;
        j++;
    }

    i = 0;
    while (str2[i] != '\0')
    {
        result[j] = str2[i];
        i++;
        j++;
    }
    result[j] = '\0';
    printf("\nafter concatenate: %s", result);
}

bool isStrEqual(const char str1[], const char str2[])
{
    int i = 0;
    bool flag = 1;

    while ((str1[i] != '\0') || (str2[i] != '\0'))
    {
        if (str1[i] != str2[i])
        {
            flag = 0;
            break;
        }
        else
        {
            i++;
            continue;
        }
    }

    return flag;
}

int main()
{
    char string[100], result[100], str1[100], str2[100];

    printf("enter a string to count character: ");
    gets(string);
    printf("enter a string 1 to concatenate and check string 1 and 2 are equal: ");
    gets(str1);
    printf("enter a string 2 to concatenate and check string 1 and 2 are equal: ");
    gets(str2);

    printf("\nthe number of character is %d", charCount(string));
    concatenate(result, str1, str2);
    printf("\nis same: %d", isStrEqual(str1, str2));

    return 0;
}