/*
*   Sol: Setup a label at the end of the 
*   loop with a null statement, then use goto label;
*/

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            goto loop_end;
        }
        printf("%d ", i);

        loop_end: /* Null statement */;
    }
    printf("\n");

    return 0;
}