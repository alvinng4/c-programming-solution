#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    int octal_num = 0;

    octal_num += num % 8;
    num /= 8;

    octal_num += num % 8 * 10;
    num /= 8;

    octal_num += num % 8 * 100;
    num /= 8;

    octal_num += num % 8 * 1000;
    num /= 8;

    octal_num += num % 8 * 10000;

    printf("In octal, your number is: %.5d\n", octal_num);
}