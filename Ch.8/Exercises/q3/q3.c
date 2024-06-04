// C89

#include <stdio.h>

#define N 7
#define true 1
#define false 0

typedef int bool;

int main(void)
{
    bool weekend[] = {true, false, false, false, false, false, true};

    int i;
    for (i = 0; i < N; i++)
    {
        printf("%d\n", weekend[i]);
    }

    return 0;
}