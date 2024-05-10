#include <stdio.h>

int main(void)
{
    int i = 1;
    int j = 2;

    // (a) i: 3, j: 2
    i = 1;
    j = 2;
    i += j;
    printf("(a): i = %d, j = %d\n", i, j);

    // (b) i: 0, j: 2
    i = 1;
    j = 2;
    i--;
    printf("(b): i = %d, j = %d\n", i, j);

    // (c) i: 1, j: 2
    i = 1;
    j = 2;
    i * j / i;
    printf("(c): i = %d, j = %d\n", i, j);

    // (d) i: 1, j: 3
    i = 1;
    j = 2;
    i % ++j;
    printf("(d): i = %d, j = %d\n", i, j);

    return 0;   
}