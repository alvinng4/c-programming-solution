#include <stdio.h>

int main(void)
{
    printf("Compute e with \\sum_{i = 0}^{n} \\frac{1}{n!}\n");

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    float sum = 1;
    int factorial = 1;
    for (int i = 1; i < n; i++)
    {
        factorial *= i;
        sum += 1.0f / factorial;
    }

    printf("e = %g\n", sum);
}