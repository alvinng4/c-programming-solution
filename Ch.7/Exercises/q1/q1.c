/*
*   Sol: (a) 077 is an octal number. 
*            The decimal value is 7 x 8 + 7 = 63
*        (b) 0x77 is a hexadecimal number.
*            The decimal value is 7 x 16 + 7 = 119
*        (c) 0XABC is a hexadecimal number.
*            The decimal value is 10 x 16^2 + 11 x 16 + 12 = 2748
*/

#include <stdio.h>

int main(void) 
{
    printf("(a) %d\n", 077);
    printf("(b) %d\n", 0x77);
    printf("(c) %d\n", 0XABC);
    
    return 0;
}