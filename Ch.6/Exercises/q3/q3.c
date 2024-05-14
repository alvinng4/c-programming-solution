/*
*   Sol: In the for loop:
            Initialization: i = 5, j = i - 1 = 4
            Conditional expression: only takes the 
                right expression of the comma operator,
                which is j > 0
            Last expression: --i then j = i - 1
         
         After the first step, it prints "5 ",
         then i becomes 4, j becomes 3. This
         continues until j = 0. Therefore,
         it prints "5 4 3 2 "
*/

#include <stdio.h>

int main(void) 
{
    int i;
    int j;
    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1) 
    {
        printf("%d ", i);
    }

    return 0;
}