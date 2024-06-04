#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hour = 0;
    int minute = 0;

    printf("Enter a 24-hour time (XX:XX): ");
    scanf("%2d:%2d", &hour, &minute);

    int total_minute = hour * 60 + minute;

    int departure_times[] = {
        (8 * 60 + 0),
        (9 * 60 + 43),
        (11 * 60 + 19),
        (12 * 60 + 47),
        (14 * 60 + 0),
        (15 * 60 + 45),
        (19 * 60 + 0),
        (21 * 60 + 45)
    };

    int arrival_times[] = {
        (10 * 60 + 16),
        (11 * 60 + 52),
        (13 * 60 + 31),
        (15 * 60 + 0),
        (16 * 60 + 8),
        (17 * 60 + 55),
        (21 * 60 + 20),
        (23 * 60 + 58)
    };

    int min_diff;
    int i;
    for (i = 0; i < (int) (sizeof(departure_times) / sizeof(departure_times[0])); i++)
    {   
        int temp_diff = abs(total_minute - departure_times[i]);
        if (i == 0)
        {
            min_diff = temp_diff;
        }
        else if (temp_diff < min_diff)
        {
            // Quit if i reaches the end of loop
            if (i == ((int) (sizeof(departure_times) / sizeof(departure_times[0])) - 1))
            {
                break;
            }

            min_diff = temp_diff;
        }
        else
        {
            i--;
            break;
        }
    }

    int departure_hour = departure_times[i] / 60;
    int departure_min = departure_times[i] % 60;
    int arrival_hour = arrival_times[i] / 60;
    int arrival_min = arrival_times[i] % 60;

    printf("Closest departure time is ");

    if (departure_hour < 12)
    {
        printf("%02d:%02d a.m.", departure_hour, departure_min);
    }
    else if (departure_hour == 12)
    {
        printf("12:%02d p.m.", departure_min);
    }
    else
    {
        printf("%02d:%02d p.m.", departure_hour - 12, departure_min);
    }

    printf(", arriving at ");
    if (arrival_hour < 12)
    {
        printf("%02d:%02d a.m.", arrival_hour, arrival_min);
    }
    else if (arrival_hour == 12)
    {
        printf("12:%02d p.m.", arrival_min);
    }
    else
    {
        printf("%02d:%02d p.m.", arrival_hour - 12, arrival_min);
    }
    printf("\n");

    return 0;
}