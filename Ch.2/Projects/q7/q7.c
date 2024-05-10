#include <stdio.h>

int main(void)
{
    int init_amount;
    int remaining_amount;
    int twenty_dollar_bill;
    int ten_dollar_bill;
    int five_dollar_bill;
    int one_dollar_bill;

    printf("Enter a dollar amount: ");
    scanf("%d", &init_amount);

    twenty_dollar_bill = init_amount / 20;
    remaining_amount = init_amount % 20;

    ten_dollar_bill = (remaining_amount) / 10;
    remaining_amount = remaining_amount % 10;

    five_dollar_bill = (remaining_amount) / 5;
    remaining_amount = remaining_amount % 5;

    one_dollar_bill = remaining_amount;

    printf("$20 bills: %d\n", twenty_dollar_bill);
    printf("$10 bills: %d\n", ten_dollar_bill);
    printf(" $5 bills: %d\n", five_dollar_bill);
    printf(" $1 bills: %d\n", one_dollar_bill);

    return 0;
}