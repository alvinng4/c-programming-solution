#include <stdio.h>

int main(void)
{
    printf("Compute e with \\sum_{i = 0}^{n} \\frac{1}{n!}\n");

    float epsilon;
    printf("Enter epsilon for \\frac{1}{n!}: ");
    scanf("%f", &epsilon);

    float sum = 1;
    int factorial = 1;
    int i;
    for (i = 1; 1.0f / factorial >= epsilon; i++)
    {
        factorial *= i;
        sum += 1.0f / factorial;
    }

    printf("e = %g\n", sum);
    printf("Iteraions: %d\n", i + 1);
}