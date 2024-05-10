/*
*   My sol. is (i < j) ? -1 : (i > j).
*   The official sol. from the author is (i > j) - (i < j).
*/
#include <stdio.h>

int main(void)
{
    int i;
    int j;
    
    printf("(i < j) ? -1 : (i > j)\n");

    printf("\n");

    printf("Enter i: ");
    scanf("%d", &i);

    printf("Enter j: ");
    scanf("%d", &j);

    printf("returns: %d\n", (i < j) ? -1 : (i > j));
}