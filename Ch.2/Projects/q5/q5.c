#include <stdio.h>

int main(void)
{
    float x;

    printf("Enter x: ");
    scanf("%f", &x);
    float value = 3 * (x * x * x * x * x)
        + 2 * (x * x * x * x)
        - 5 * (x * x * x)
        - (x * x)
        + 7 * x 
        - 6;  
    printf("%f", value);

    return 0;
}