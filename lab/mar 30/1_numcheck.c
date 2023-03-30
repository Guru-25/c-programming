/* Find the given number is present in the array or not. If present, display its position. */

#include <stdio.h>

int main()
{
    int n, i, num, position = -1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number to search for: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            position = i;
            break;
        }
    }

    if (position == -1)
        printf("%d is not present in the array", num);
    else
        printf("%d is present in the array at position %d", num, position); 

    return 0;
}
