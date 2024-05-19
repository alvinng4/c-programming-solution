/* Adds two fractions */

#include <stdio.h>

int main(void)
{
    int num1;
    int denom1;
    int num2;
    int denom2;
    char operator;
    int result_num;
    int result_denom;

    printf("Enter two fractions separated by a arithmetic operator: ");
    scanf("%d /%d %c%d /%d", &num1, &denom1, &operator, &num2, &denom2);  

    switch (operator)
    {
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = denom1 * num2;
            break;
        default:
            printf("Invalid input!");
            return 1;
    }

    printf("The result is %d/%d\n", result_num, result_denom);

    return 0;
}