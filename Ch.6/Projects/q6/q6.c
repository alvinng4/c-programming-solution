#include <stdio.h>

int main(void)
{   
    int n;
    printf("Enter a number n: ");
    scanf("%d", &n);

    int d = 2;
    while (d * d <= n)
    {
        printf("%d\n", d * d);
        d += 2;
    }
}