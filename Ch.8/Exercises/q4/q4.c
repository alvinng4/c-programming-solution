// C99

#include <stdbool.h>
#include <stdio.h>

#define N 7

int main(void)
{
    bool weekend[N] = {true, [N - 1] = true};

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", weekend[i]);
    }

    return 0;
}