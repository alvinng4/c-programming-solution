// Sol: Yes (in C99), since the final value is truncated towards zero.

#include <stdio.h>

int main(void)
{
    int i;
    int j;

    printf("Enter i: ");
    scanf("%d", &i);
    printf("Enter j: ");
    scanf("%d", &j);

    printf("(-i) / j: %d\n", (-i) / j);
    printf("-(i / j): %d\n", -(i / j));

    return 0;
}