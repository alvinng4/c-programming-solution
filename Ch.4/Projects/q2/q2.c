#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    printf("The reversal is: %.3d\n", (num % 10) * 100 + ((num % 100) / 10) * 10 + num / 100);

    return 0;
}