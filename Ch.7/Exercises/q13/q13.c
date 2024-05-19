/*
*   Sol: (a): int, -3
*        (b): long, 7
*        (c): float, 6.5
*        (d): double, 3.75
*        (e): double, -1
*        (f): int, 6        
*/

#include <stdio.h>

int main(void) 
{
    char c = '\1';
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5f;
    double d = 7.5;

    printf("(a) c * i = %d\n", c * i);
    printf("(b) s + m = %ld\n", s + m);
    printf("(c) f / c = %f\n", f / c);
    printf("(d) d / s = %f\n", d / s);
    printf("(e) f - d = %f\n", f - d);
    printf("(f) (int) f = %d\n", (int) f);

    return 0;
}