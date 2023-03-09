/* Print all the two digit pair that are producing the sum "150". Example pairs: (60, 90), (61,89)... */

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 10 ; i <= 99 ; i++)
    {
        for (j = 10 ; j <= 99 ; j++)
        {
            if (i + j == 150)
                printf(("(%d, %d), "), i, j);
        }
    }

    return 0;
}