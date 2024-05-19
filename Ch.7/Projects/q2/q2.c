/* Prints a table of squares using a for statement */
#include <stdio.h>

int main(void)
{
    for (int i = 1, n = 24;; n += 24)
    {
        for (; i <= n; i++)
        {
            printf("%10d%10d\n", i, i * i);
        }

        printf("Press Enter to continue...");
        while (getchar() != '\n')
        {
            /* Null statement */
        }
    }

    return 0;
}