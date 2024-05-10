#include <stdio.h>

int main(void)
{
    int wind_speed = 0;
    printf("Enter a wind speed (knots): ");
    scanf("%d", &wind_speed);

    if (wind_speed < 1)
    {
        printf("Description: Calm\n");
    }
    else if (wind_speed <= 3)
    {
        printf("Description: Light air\n");
    }
    else if (wind_speed <= 27)
    {
        printf("Description: Breeze\n");
    }
    else if (wind_speed <= 47)
    {
        printf("Description: Gale\n");
    }
    else if (wind_speed <= 63)
    {
        printf("Description: Storm\n");
    }
    else
    {
        printf("Description: Hurricane\n");
    }
}