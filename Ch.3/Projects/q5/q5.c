#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int num6;
    int num7;
    int num8;
    int num9;
    int num10;
    int num11;
    int num12;
    int num13;
    int num14;
    int num15;
    int num16;
    
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
        &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, 
        &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);

    printf("\n");
    
    printf("%2d %2d %2d %2d\n", num1, num2, num3, num4);
    printf("%2d %2d %2d %2d\n", num5, num6, num7, num8);
    printf("%2d %2d %2d %2d\n", num9, num10, num11, num12);
    printf("%2d %2d %2d %2d\n", num13, num14, num15, num16);

    printf("\n");

    printf(
        "Row sums: %d %d %d %d\n", 
        (num1 + num2 + num3 + num4), 
        (num5 + num6 + num7 + num8), 
        (num9 + num10 + num11 + num12), 
        (num13 + num14 + num15 + num16)
    );
    printf(
        "Column sums: %d %d %d %d\n", 
        (num1 + num5 + num9 + num13), 
        (num2 + num6 + num10 + num14), 
        (num3 + num7 + num11 + num15), 
        (num4 + num8 + num12 + num16)
    );
    printf(
        "Diagonal sums: %d %d\n", 
        (num1 + num6 + num11 + num16), 
        (num4 + num7 + num10 + num13)
    );
}