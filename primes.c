#include <stdio.h>
#include <stdbool.h>

int main()
{
    int array[50];
    array[0] = 2;
    array[1] = 3;
    int index = 2;
    bool prime;

    int i, j;
    for (i = 5 ; i < 100 ; i = i + 2)
    {
        prime = true;
        for (j = 2 ; j < i ; j++)
        {
            if (i % j == 0)
                prime = false;
        }
        if (prime)
        {
            array[index] = i;
            index++;
        }
    }
    
    for (i = 0 ; i < index ; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}