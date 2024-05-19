// Sol: No, it can be wrong if the integer part of f is larger than the max value of int.

#include <stdio.h>

int main(void) 
{
    float f;
    printf("Enter a number (float): ");
    scanf("%f", &f);

    float frac_part = f - (int) f;
    printf("frac_part = %f\n", frac_part);

    return 0;
}