#include <stdio.h>

int main(void)
{
    int num_day;
    int starting_day;
    printf("Enter number of days in month: ");
    scanf("%d", &num_day);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    for (int i = 0; i < starting_day - 1; i++)
    {
        printf("   ");
    }
    for (int i = 0; i < num_day; i++)
    {
        printf("%2d ", i + 1);
        if ((i + starting_day) % 7 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
}