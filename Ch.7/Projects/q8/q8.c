#include <stdio.h>

int main(void)
{
    int hour = 0;
    int minute = 0;
    char am_pm_indicator;

    printf("Enter a 12-hour time XX:XX am/pm: ");
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
    int total_minute = hour * 60 + minute;

    if (total_minute < (8 * 60 + 0 + 9 * 60 + 43) / 2)
    {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    }
    else if (total_minute < (9 * 60 + 43 + 11 * 60 + 19) / 2)
    {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    }
    else if (total_minute < (11 * 60 + 19 + 12 * 60 + 47) / 2)
    {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    }
    else if (total_minute < (12 * 60 + 47 + 14 * 60 + 0) / 2)
    {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    }
    else if (total_minute < (14 * 60 + 0 + 15 * 60 + 45) / 2)
    {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    }
    else if (total_minute < (15 * 60 + 45 + 19 * 60 + 0) / 2)
    {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    }
    else if (total_minute < (19 * 60 + 0 + 21 * 60 + 45) / 2)
    {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    }
    else
    {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    }

    return 0;
}