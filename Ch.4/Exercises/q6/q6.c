/*
*   Sol:
*   (a): 3
*   (b): -3
*   (c): 3
*   (d): -3
*/
#include <stdio.h>

int main(void) 
{
    int a = 8 % 5;
    int b = -8 % 5;
    int c = 8 % -5;
    int d = -8 % -5;

    printf("(a) 8 %% 5 = %d\n", a);
    printf("(b) -8 %% 5 = %d\n", b);
    printf("(c) 8 %% -5 = %d\n", c);
    printf("(d) -8 %% -5 = %d\n", d);

    return 0;
}