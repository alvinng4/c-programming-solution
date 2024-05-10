/*
*   Sol: It is legal, but it does not give the desired result.
*        n == 1 - 10 is equiv. to n == (1 - 10), which is true
*        iff n = -9.
*
*        It does nothing when n is equal to 5.
*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 1-10)
    {
        printf("n is between 1 and 10\n");
    }
}