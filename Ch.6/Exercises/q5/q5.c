/*
*   Sol: (a) and (b) are the same, since
*        they evaluate the conditional expression
*        first, while (c) evaluate the conditional 
*        expression last. (c) will perform the 
*        action once even if i is >= 10.
*/

#include <stdio.h>

int main(void) 
{
    int i;

    // (a)
    i = 10;
    while (i < 10) 
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // (b)
    i = 10;
    for (; i < 10;) 
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // (c)
    i = 10;
    do
    {
        printf("%d ", i);
        i++;
    } while (i < 10);
    printf("\n");

    return 0;
}