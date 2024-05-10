#include <stdio.h>

int main(void) 
{
    int a = 10;
    int b = 5;
    int c = 3;
    int d = 2;
    int e = 7;

    // (a)
    printf("(a)\n");
    printf("%d\n", a * b - c * d + e);
    printf("%d\n", ((a * b) - (c * d)) + e);

    // (b)
    printf("(b)\n");
    printf("%d\n", a / b % c / d);
    printf("%d\n", ((a / b) % c) / d);

    // (c)
    printf("(c)\n");
    printf("%d\n", -a - b + c - +d);
    printf("%d\n", (((-a) - b) + c) - (+d));

    // (d)
    printf("(d)\n");
    printf("%d\n", a * -b / c - d);
    printf("%d\n", ((a * (-b)) / c) - d);

    return 0;
}