/*  Print the byte size of the basic data types */

#include<stdio.h>

int main()
{
    printf("byte size of int is %d\n", sizeof(int));
    printf("byte size of char is %d\n", sizeof(char));
    printf("byte size of long is %d\n", sizeof(long));
    printf("byte size of long long is %d\n", sizeof(long long));
    printf("byte size of double is %d\n", sizeof(double));
    printf("byte size of long double is %d\n", sizeof(long double));

    return 0;
}