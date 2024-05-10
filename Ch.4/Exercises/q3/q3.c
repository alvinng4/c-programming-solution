/*
*   Sol:
*   (a): 1
*   (b): -1 or -2
*   (c): -1 or -2
*   (d): 1 or 2
*/
#include <stdio.h>

int main(void) 
{
    int a = 8 / 5;
    int b = -8 / 5;
    int c = 8 / -5;
    int d = -8 / -5;

    printf("(a) 8 / 5 = %d\n", a);
    printf("(b) -8 / 5 = %d\n", b);
    printf("(c) 8 / -5 = %d\n", c);
    printf("(d) -8 / -5 = %d\n", d);

    return 0;
}