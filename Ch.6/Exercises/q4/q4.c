/*
*   Sol: (a) and (b) are the same, since the value 
*        in the last expression is discarded. Therefore,
*        the sole effect is the increment of i, and then
*        compare with i < 10. In (c),
*        i is compared with 10 before incrementing.
*/

#include <stdio.h>

int main(void) 
{
    int i;

    // (a)
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", i);
    }
    printf("\n");

    // (b)
    for (i = 0; i < 10; ++i) 
    {
        printf("%d ", i);
    }
    printf("\n");

    // (c)
    for (i = 0; i++ < 10; ) 
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}