/*
*   Sol: ++i is equivalent to (i += 1), because 
*        (i += 1) have the effect:
*            (1): Increment i by one
*            (2): Return the value i + 1
*        which is the same as ++i.
*/

#include <stdio.h>

int main(void)
{
    int i;

    i = 3;
    printf("%d\n", i += 1);
    printf("%d\n", i);

    i = 3;
    printf("%d\n", i++);
    printf("%d\n", i);

    i = 3;
    printf("%d\n", ++i);
    printf("%d\n", i);
}