/* Calculates a broker's broker_commission */

#include <stdio.h>

int main(void)
{
    float rival_commission, broker_commission, value, share, price;

    printf("Enter number of shares: ");
    scanf("%f", &share);

    printf("Enter price per share: ");
    scanf("%f", &price);

    value = price * share;

    // broker_commission
    if (value < 2500.00f)
        broker_commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        broker_commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        broker_commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        broker_commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        broker_commission = 155.00f + .0011f * value;
    else
        broker_commission = 255.00f + .0009f * value;

    if (broker_commission < 39.00f)
        broker_commission = 39.00f;

    // rival_commission
    if (share < 2000.0f)
        rival_commission = 33.0f + 0.03f * share;
    else 
        rival_commission = 33.0f + 0.02f * share;

    printf("broker_commission: $%.2f\n", broker_commission);
    printf("rival_commission: $%.2f\n", rival_commission);

    return 0;
}
