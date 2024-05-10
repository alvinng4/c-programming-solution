#include <stdio.h>

int main(void) 
{
    int i;
    int j;
    int k;

    // (a): "0 2"
    i = 1;
    printf("%d ", i++ - 1);
    printf("%d\n", i);

    // (b): "4 11 6"
    i = 10;
    j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d\n", i, j);

    // (c): "0 8 7"
    i = 7;
    j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d\n", i, j);

    // (d): "3 4 5 4"
    i = 3;
    j = 4;
    k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d\n", i, j, k);

    return 0;
}