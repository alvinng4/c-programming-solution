/*
*   Sol: (a): 7
*        (b): 12
*        (c): 20
*        (d): 20
*        (e): 34
*        (f): 170
*        (g): 170
*/


#include <stdio.h>

int main(void)
{
    int num;
    long double fac = 1.0f;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = num; i != 0; i--)
    {
        fac *= i;
    }
    printf("Factorial of %d: %Lg\n", num, fac);
}