#include <stdio.h>

#define N 40

int main(void)
{
    int fib[N] = {0, 1};

    for (int i = 2; i < N; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d: %d\n", i + 1, fib[i]);
    }

    return 0;
}