#include <stdio.h>

int main(void)
{
    float income = 0;
    printf("Enter taxable income: $");
    scanf("%f", &income);

    if (income <= 750.0f)
    {
        printf("tax: $%f\n", income * 0.01f);
    }
    else if (income <= 2250.0f)
    {
        printf("tax: $%f\n", 7.50f + (income - 750.0f) * 0.02f);
    }
    else if (income <= 3750.0f)
    {
        printf("tax: $%f\n", 37.50f + (income - 2250.0f) * 0.03f);
    }
    else if (income <= 5250.0f)
    {
        printf("tax: $%f\n", 82.50f + (income - 3750.0f) * 0.04f);
    }
    else if (income <= 7000.0f)
    {
        printf("tax: $%f\n", 142.50f + (income - 5250.0f) * 0.05f);
    }
    else
    {
        printf("tax: $%f\n", 230.0f + (income - 7000.0f) * 0.06f);
    }
}