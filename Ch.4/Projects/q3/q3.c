#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &num1, &num2, &num3);

    printf("The reversal is: %d%d%d\n", num3, num2, num1);

    return 0;
}