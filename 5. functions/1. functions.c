#include <stdio.h>

int findGcd(int n1, int n2)
{
    int smaller, i, gcd;
    if (n1 < n2)
        smaller = n1;
    else
        smaller = n2;
    for (i = 1 ; i <= smaller ; i++)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
            gcd = i;
    }
    printf("gcd is: %d", gcd);
}

float power(float b, float e)
{
    int i;
    float res = 1;
    for (i = 0 ; i < e ; i++)
        res = res * b;
    return res;
}

float find_sqrt(float num)
{
    float temp, sqrt;
    sqrt = num / 3;
    temp = 0;
    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = ( num/temp + temp) / 2;
    }
    return sqrt;
}

float find_ab(float n)
{
    float square, root;
    square = power(n, 2);
    root = find_sqrt(square);
    return root;    
}

int main()
{
    int user, gcd_n1, gcd_n2;

    printf("1 to gcd\n2 to absolute\n3 to square root\n\nchoose anything: ");
    scanf("%d", &user);

    if (user == 1)
    {
        printf("enter number 1: ");
        scanf("%d", &gcd_n1);
        printf("enter number 2: ");
        scanf("%d", &gcd_n2);
        if (gcd_n1 > 0 && gcd_n2 > 0)
            findGcd(gcd_n1, gcd_n2);
        else if (gcd_n1 <= 0 || gcd_n2 <= 0)
            printf("negative integers not allowed");
        else
            printf("invalid");
    }

    else if (user == 2)
    {
        float ab_n;
        printf("enter a number : ");
        scanf("%f", &ab_n);
        printf("absolute number is %.2f", find_ab(ab_n));
    }

    else if (user == 3)
    {
        float sqrt_num;
        printf("enter a number : ");
        scanf("%f", &sqrt_num);
        printf("square root is %.2f", find_sqrt(sqrt_num));
    }

    return 0;
}