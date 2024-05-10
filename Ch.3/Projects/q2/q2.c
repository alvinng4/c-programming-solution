#include <stdio.h>

int main(void)
{
    int item_num = 0;
    float unit_price = 0;

    int purchase_day = 0;
    int purchase_month = 0;
    int purchase_year = 0;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &purchase_month, &purchase_day, &purchase_year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%.2d/%.2d/%.4d\n", item_num, unit_price, purchase_month, purchase_day, purchase_year);

    return 0;
}