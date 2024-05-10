#include <stdio.h>

int main(void)
{
    int num;
    int digit_of_num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (0 <= num && num <= 9)
    {
        digit_of_num = 1;
    }
    else if (10 <= num && num <= 99)
    {
        digit_of_num = 2;
    }
    else if (100 <= num && num <= 999)
    {
        digit_of_num = 3;
    }
    else if (1000 <= num && num <= 9999)
    {
        digit_of_num = 4;
    }

    printf("The number %d has %d digits\n", num, digit_of_num);
}