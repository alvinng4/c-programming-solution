#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    printf("Enter a fraction: ");
    scanf("%d /%d", &num1, &num2);

    int remainder;
    int temp_num1 = num1;
    int temp_num2 = num2;
    while (temp_num2 != 0)
    {
        remainder = temp_num1 % temp_num2;
        temp_num1 = temp_num2;
        temp_num2 = remainder;
    }

    int gcd = temp_num1;

    printf("In lowest terms: %d/%d\n", num1 / gcd, num2 / gcd);

    return 0;
}