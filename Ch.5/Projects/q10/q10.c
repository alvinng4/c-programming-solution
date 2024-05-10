#include <stdio.h>

int main(void)
{
    int num_grade = 0;
    printf("Enter numerical grade: ");
    scanf("%d", &num_grade);

    switch (num_grade / 10)
    {
        case 10: 
            if (num_grade % 10 == 0)
            {
                printf("Letter grade: A\n");
            }
            else 
            {
                printf("Invalid grade\n");
            }
            break;
        case 9:
            printf("Letter grade: A\n");
            break;
        case 8:
            printf("Letter grade: B\n");
            break;
        case 7:
            printf("Letter grade: C\n");
            break;
        case 6:
            printf("Letter grade: D\n");
            break;
        case 5: case 4: case 3: case 2: case 1:
            printf("Letter grade: F\n");
            break;
        case 0:
            if (num_grade % 10 == 0)
                printf("Letter grade: F\n");
            else 
            {
                printf("Invalid grade\n");
            }
            break;
        default:
            printf("Invalid grade\n");
            break;
    }
}