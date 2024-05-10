#include <stdbool.h>
#include <stdio.h>

int main(void)
{   
    int age;
    bool teenager;

    printf("Enter age: ");
    scanf("%d", &age);

    teenager = age >= 13 && age <= 19;

    printf("teenager: %s\n", teenager ? "true" : "false");
}