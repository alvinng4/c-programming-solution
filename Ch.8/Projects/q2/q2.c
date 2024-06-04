/* Checks occurance of each digit in a long number */
#include <stdio.h>

int main(void)
{
    int occurances[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) 
    {
        digit = n % 10;
        occurances[digit]++;
        n /= 10;
    }

    printf("Digit: \t");
    for (int i = 0; i < 10; i++)
    {
        printf("\t%d", i);
    }
    printf("\n");
    printf("Occurrences:");
    for (int i = 0; i < 10; i++)
    {
        printf("\t%d", occurances[i]);
    }
    printf("\n");

    return 0;
}