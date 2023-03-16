/* Write a function to find the BMI value and check the input validity */

#include <stdio.h>

void bmi(float h, float w)
{
    float bmi_value;

    if (h > 0 && w > 0)
    {
        bmi_value = w / (h * h);
        printf("bmi is %.2f", bmi_value);
    }
    else
        printf("not a valid value");
}

int main()
{
    float height, weight;

    printf("enter height (m): ");
    scanf("%f", &height);
    printf("enter weight (kg): ");
    scanf("%f", &weight);

    bmi(height, weight);

    return 0;
}
