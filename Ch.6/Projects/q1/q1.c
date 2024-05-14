#include <stdio.h>

int main(void)
{   
    float max = 0.0f;
    float num;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%f", &num);

        if (num <= 0)
        {
            break;
        }   
        else if (num > max)
        {
            max = num;
        }
    }
    printf("\n");
    printf("The largest number entered was %.2f\n", max);

    return 0;
}