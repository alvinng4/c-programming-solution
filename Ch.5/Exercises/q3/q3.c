#include <stdio.h>

int main(void) 
{
    int i;
    int j;
    int k;

    /*
    *   (a): Note that the statement is same as 
    *        (i < j) || ((++j) < k). However, 
    *        since i < j is true, only the left 
    *        hand side of || will be executed.
    *        Therefore, the output is 
    *        "1 3 4 5".
    */
    i = 3; 
    j = 4; 
    k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);

    // (b): "0 7 8 9", since the && statement returns 0
    //      immediately after evaluating (i - 7), which has value 0.
    i = 7; 
    j = 8; 
    k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k);

    // (c): "1 8 8 9", since (i = j) gives 8, which is evaluated as true.
    i = 7; 
    j = 8; 
    k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);

    /*
    *   (d): "1 2 1 1", since (++i || ++j)
    *        returns 1 after ++i is evaluated,
    *        and then (1 && ++k) returns 1  
    *        without executing ++k.  
    */     
    i = 1; 
    j = 1; 
    k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d\n", i, j, k);

    return 0;
}