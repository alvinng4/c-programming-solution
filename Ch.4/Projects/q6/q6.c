#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, num6, 
        num7, num8, num9, num10, num11, num12;
    printf("Enter the first 12 digits of an EAN: ");
    scanf(
        "%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &num1, &num2, &num3, &num4, &num5, &num6, 
        &num7, &num8, &num9, &num10, &num11, &num12
    );
    
    int sum1 = num2 + num4 + num6 + num8 + num10 + num12;
    int sum2 = num1 + num3 + num5 + num7 + num9 + num11;

    int total = sum1 * 3 + sum2 - 1;

    int check_digit = 9 - total % 10;

    printf("Check digit: %d\n", check_digit);

    return 0;
}