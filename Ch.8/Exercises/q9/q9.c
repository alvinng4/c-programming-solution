#include <stdio.h>

int main(void)
{
    double temperature_readings[30][24];

    double average_temp = 0;
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 24; j++)
        {
            average_temp += temperature_readings[i][j];
        }
    }
    average_temp /= (30 * 24);

    return 0;
}
