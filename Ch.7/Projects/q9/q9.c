#include <stdio.h>

int main(void)
{
    int hour = 0;
    int minute = 0;
    char am_pm_indicator;

    printf("Enter a 12-hour time: ");
    scanf("%2d :%2d %c", &hour, &minute, &am_pm_indicator);

    switch (am_pm_indicator)
    {
        case 'a': case 'A':
            if (hour == 12)
            {
                hour = 0;
            }
            break;
        case 'p': case 'P':
            if (hour != 12)
            {
                hour += 12;
            }
            break;
    }

    printf("Equivalent 24-hour time: %d:%.2d\n", hour, minute);

    return 0;
}