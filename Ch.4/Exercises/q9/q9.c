#include <stdio.h>

int main(void) 
{
    int i;
    int j;
    int k;

    // (a): "63 8"
    i = 7;
    j = 8;
    i *= j + 1;
    printf("%d %d\n", i, j);

    // (b): "3 2 1"
    i = j = k = 1;
    i += j += k;
    printf("%d %d %d\n", i, j, k);

    // (c): "2 -1 3"
    i = 1;
    j = 2;
    k = 3;
    i -= j -= k;
    printf("%d %d %d\n", i, j, k);

    // (d): "0 0 0"
    i = 2;
    j = 1;
    k = 0;
    i *= j *= k;
    printf("%d %d %d\n", i, j, k);

    return 0;
}