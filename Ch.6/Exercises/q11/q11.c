/*
*   Sol: 0 + 2 + 4 + 6 + 8 gives "20\n"
*/

#include <stdio.h>

int main(void)
{
    int sum = 0;
    for (int i = 0; i < 10; i++) 
    {
        if (i % 2)
        {
            continue;
        }
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}