#include <stdio.h>

int main(void) 
{
    int i;
    int j;
    int k;

    // (a): 1, since it is same as (!i) < j
    i = 10;
    j = 5;
    printf("%d\n", !i < j);

    // (b): 1, since it is same as !(!i) + !j
    i = 2;
    j = 1;
    printf("%d\n", !!i + !j);

    // (c): 1, since it is same as (i && j) || k
    i = 5;
    j = 0;
    k = -5;
    printf("%d\n", i && j || k);

    // (d): 1, since it is same as (i < j) || k
    i = 1;
    j = 2;
    k = 3;
    printf("%d\n", i < j || k);

    return 0;
}