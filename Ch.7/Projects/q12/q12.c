#include <stdio.h>

int main(void)
{
    float result;
    float operand;
    char ch;
    printf("Enter an expression: ");
    scanf("%f", &result);

    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
        {
            continue;
        }

        scanf("%f", &operand);
        switch(ch)
        {
            case '+':
                result += operand;
                break;
            case '-':
                result -= operand;
                break;
            case '*':
                result *= operand;
                break;
            case '/':
                result /= operand;
                break;
            default:
                printf("Invalid input!\n");
                return 1;
        }
    }

    printf("Value of expression: %f\n", result);

    return 0;
}