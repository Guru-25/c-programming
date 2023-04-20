/* Perform the following string operations using switch-case
   a. Check the given string is palindrome or not
   b. Find the length of the given string
   c. Check the given string contains more than one vowel or not */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int choice, i, len, count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Select an operation:\n");
    printf("1. Check if the given string is a palindrome\n");
    printf("2. Find the length of the given string\n");
    printf("3. Check if the given string contains more than one vowel\n");
    scanf("%d", &choice);
    len = strlen(str);
    switch (choice)
    {
        case 1:
            for (i = 0; str[i] != '\0'; i++)
                rev[len - 1 - i] = str[i];
            if (strcmp(str, rev) == 0)
                printf("%s is a palindrome\n", str);
            else
                printf("%s is not a palindrome\n", str);
            break;
        case 2:
            printf("The length of %s is %d\n", str, len);
            break;
        case 3:
            for (i = 0; i < len; i++)
            {
                switch (str[i])
                {
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u':
                        count++;
                        break;
                }
            }
            if (count > 1)
                printf("%s contains more than one vowel\n", str);
            else
                printf("%s does not contain more than one vowel\n", str);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
