#include <stdio.h>

int main(void)
{   
    int hour = 0;
    int minute = 0;
    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hour, &minute);

    if (hour <= 11 || hour == 24)
    {
        if (hour == 24 || hour == 0)
        {
            hour = 12;
        }

        printf("Equivalent 12-hour time: %2d:%.2d AM\n", hour, minute);
    }
    else
    {
        if (hour != 12)
        {
            hour -= 12;
        }

        printf("Equivalent 12-hour time: %2d:%.2d PM\n", hour, minute);
    }
}