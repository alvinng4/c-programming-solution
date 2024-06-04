/* Checks numbers for repeated digits */
#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;
    long temp;

    while (1)
    {
        printf("Enter a number (enter a number <= 0 to terminate): ");
        scanf("%ld", &n);

        if (n <= 0)
        {
            break;
        }

        temp = n;
        while (temp > 0) 
        {
            digit = temp % 10;
            if (digit_seen[digit])
            {
                break;
            }
            digit_seen[digit] = true;
            temp /= 10;
        }
    }

    if (temp > 0)
    {
        printf("Repeated digit\n");
    }
    else
    {
        printf("No repeated digit\n");
    }
    
    return 0;
}