#include <stdio.h>

int main(void)
{
    float balance;
    float interest_rate;
    float interest_rate_per_month;
    float monthly_payment;
    int num_payment;

    printf("Enter amouont of loan: ");
    scanf("%f", &balance);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    interest_rate_per_month = interest_rate / 12.0f;

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Enter number of payments: ");
    scanf("%d", &num_payment);

    printf("\n");
    for (int i = 0; i < num_payment; i++)
    {
        balance = balance * (1.0f + interest_rate_per_month / 100.0f) - monthly_payment;
        if (balance < 0.0f)
        {
            balance = 0.0f;
        }

        printf("Balance remaining after %d payments:  $%.2f\n", i + 1, balance);
    }

    return 0;
}