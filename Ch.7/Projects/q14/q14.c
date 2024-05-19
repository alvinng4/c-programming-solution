#include <math.h>
#include <stdio.h>

int main(void)
{
    long num;
    printf("Enter a positive number: ");
    scanf("%ld", &num);

    double guess = 1;
    double new_guess;
    int iterations;
    while (1)
    {
        new_guess = (num / guess + guess) / 2.0;
        if (fabs(new_guess - guess) < 1e-5)
        {
            break;
        }
        guess = new_guess;
        iterations++;
    }

    printf("Square root: %.5lf\n", new_guess);
    printf("Iterations: %d\n", iterations);

    return 0;
}