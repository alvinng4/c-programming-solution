#include <stdio.h>

int main(void)
{
    int month = 0;
    int day = 0;
    int year = 0;

    int earliest_month = 0;
    int earliest_day = 0;
    int earliest_year = 0;

    int flag = 0;
    while (1)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &month, &day, &year);
        if (month == 0 && day == 0 && year == 0)
        {
            break;
        }

        if (flag == 0)
        {
            earliest_month = month;
            earliest_day = day;
            earliest_year = year;
            flag++;
        }

        if (year < earliest_year)
        {
            earliest_month = month;
            earliest_day = day;
            earliest_year = year;
        }
        else if (year == earliest_year && month < earliest_month)
        {
            earliest_month = month;
            earliest_day = day;
            earliest_year = year;
        }
        else if (year == earliest_year && month == earliest_month && day < earliest_day)
        {
            earliest_month = month;
            earliest_day = day;
            earliest_year = year;
        }
    }

    printf("%d/%d/%.2d is the earliest date\n", earliest_month, earliest_day, earliest_year);
}