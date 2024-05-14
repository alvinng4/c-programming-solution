#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    printf("Enter two intergers: ");
    scanf("%d %d", &num1, &num2);

    int remainder;
    while (num2 != 0)
    {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    printf("Greatest common divisor: %d\n", num1);

    return 0;
}