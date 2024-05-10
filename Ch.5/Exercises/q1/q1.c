#include <stdio.h>

int main(void) 
{
    int i; 
    int j; 
    int k;

    // (a): 1
    i = 2;
    j = 3;
    k = i * j == 6;
    printf("%d\n", k);

    // (b): 1, since it is same as (k > i) < j
    i = 5;
    j = 10;
    k = 1;
    printf("%d\n", k > i < j);

    // (c): 1, since it is same as (i < j) == (j < k)
    i = 3;
    j = 2;
    k = 1;
    printf("%d\n", i < j == j < k);

    // (d): 0, since it is same as (i % j + i) < k
    i = 3;
    j = 4;
    k = 5;
    printf("%d\n", i % j + i < k);

    return 0;
}