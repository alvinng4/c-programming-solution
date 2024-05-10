#include <stdio.h>

int main(void)
{
    float balance;
    float interest_rate;
    float interest_percentage_per_month;
    float monthly_payment;
    
    printf("Enter amouont of loan: ");
    scanf("%f", &balance);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    interest_percentage_per_month = interest_rate / (100.0f * 12.0f);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("\n");
    balance = balance * (1.0f + interest_percentage_per_month) - monthly_payment;
    printf("Balance remaining after first payment: $%.2f\n", balance);
    balance = balance * (1.0f + interest_percentage_per_month) - monthly_payment;
    printf("Balance remaining after second payment: $%.2f\n", balance);
    balance = balance * (1.0f + interest_percentage_per_month) - monthly_payment;
    printf("Balance remaining after third payment: $%.2f\n", balance);

    return 0;
}