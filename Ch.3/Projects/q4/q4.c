#include <stdio.h>

int main(void)
{
    int group1;
    int group2;
    int group3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &group1, &group2, &group3);
    
    printf("You entered %d.%d.%d\n", group1, group2, group3);
}