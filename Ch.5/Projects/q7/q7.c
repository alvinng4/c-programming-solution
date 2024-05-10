#include <stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int max1 = 0;
    int min1 = 0;
    int max2 = 0;
    int min2 = 0;
    int max = 0;
    int min = 0;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Sorting such that num1 is largest and num4 is smallest
    if (num1 > num2)
    {
        max1 = num1;
        min1 = num2;
    }
    else
    {
        max1 = num2;
        min1 = num1;
    }

    if (num3 > num4)
    {
        max2 = num3;
        min2 = num4;
    }
    else
    {
        max2 = num4;
        min2 = num3;
    }

    if (max1 > max2)
    {
        max = max1;
    }
    else 
    {
        max = max2;
    }

    if (min1 < min2)
    {
        min = min1;
    }
    else 
    {
        min = min2;
    }

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);
}