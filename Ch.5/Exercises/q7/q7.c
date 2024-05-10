/*
*   Sol: This is basically the absolute function.
*        When i is 17, it prints 17; when i is -17, it also prints 17.
*/

#include <stdio.h>

int main(void)
{
    int i;
    printf("Enter i: ");
    scanf("%d", &i);

    printf("%d\n", i >= 0 ? i : -i);
}