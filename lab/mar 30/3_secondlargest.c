/* Find the second largest number */

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0], second_max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] != max)
            second_max = arr[i];
    }

    printf("The second largest number in the array is: %d", second_max);
    return 0;
}
