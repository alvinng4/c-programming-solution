#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n % 2 == 0) // Sol: Here remove the semicolon after the if (n % 2 == 0)
    {
        printf("n is even\n");        
    }

     
    return 0;
}