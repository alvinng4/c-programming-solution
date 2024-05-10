#include <stdio.h>

int main(void)
{
    int month1 = 0;
    int day1 = 0;
    int year1 = 0;

    int month2 = 0;
    int day2 = 0;
    int year2 = 0;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month1, &day1, &year1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month2, &day2, &year2);

    if (year1 < year2)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
    }
    else if (year2 < year1)
    {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
    }
    else
    {
        if (month1 < month2)
        {
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
        }
        else if (month2 < month1)
        {
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
        }
        else
        {
            if (day1 < day2)
            {
                printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
            }
            else if (day2 < day1)
            {
                printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
            }
            else
            {
                printf("They are the same date.\n");
            }
        }
    }
}