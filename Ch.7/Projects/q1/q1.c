/*
*   For short, it fails when n >= 182 (short (16 bits) overflow)
*   For int, it fails when n >= 46341 (int (32 bits) overflow)
*   For long, it fails when n >= 3037000500 (long (64 bits) overflow)
*/

/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
    int n;
    int i;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    
    for (i = 0; i <= n; i++)
    {
        printf("%30d%30d\n", i, i * i);
    }

    return 0;
}