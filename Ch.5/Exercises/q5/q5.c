/*
*   Sol: It is legal but it does not give the desired result.
*        n >= 1 <= 10 is equiv. to (n >= 1) <= 10, which is 
*        always true, as (n >= 1) gives 0 or 1.
*
*        When n = 0, it prints "n is between 1 and 10\n",
*        which is obviously false.
*/


#include <stdio.h>

int main(void)
{   
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n >= 1 <= 10)
    {
        printf("n is between 1 and 10\n");
    }
}