#include <stdio.h>

int main(void)
{
    int num = 0;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    if (num < 10 || num > 99)
    {
        printf("Invalid input!\n");
        return 0;
    }

    printf("You entered the number ");

    if (num / 10 == 1)
    {
        switch (num)
        {
            case 10:
                printf("ten"); 
                break;
            case 11:
                printf("eleven");
                break;
            case 12:
                printf("twelve");
                break;
            case 13:
                printf("thirdteen");
                break;
            case 14:
                printf("fourteen");
                break;
            case 15:
                printf("fifthteen");
                break;
            case 16:
                printf("sixteen");
                break;
            case 17:
                printf("seventeen");
                break;
            case 18:
                printf("eighteen");
                break;
            case 19:
                printf("nineteen");
                break;
        }
            
    }
    else
    {
        switch (num / 10)
        {
            case 9:
                printf("ninety");
                break;
            case 8:
                printf("eighty");
                break;
            case 7:
                printf("seventy");
                break;
            case 6:
                printf("sixty");
                break;
            case 5:
                printf("fifty");
                break;
            case 4:
                printf("forty");
                break;
            case 3:
                printf("thirty");
                break;
            case 2:
                printf("twenty");
                break;
        }  
        switch (num % 10)
        {
            case 9:
                printf("-nine");
                break;
            case 8:
                printf("-eight");
                break;
            case 7:
                printf("-seven");
                break;
            case 6:
                printf("-six");
                break;
            case 5:
                printf("-five");
                break;
            case 4:
                printf("-four");
                break;
            case 3:
                printf("-three");
                break;
            case 2:
                printf("-two");
                break;
            case 1:
                printf("-one");
                break;
        }  
    }
    
    printf(".\n");

    return 0;
}