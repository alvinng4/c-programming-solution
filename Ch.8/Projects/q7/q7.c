#include <stdio.h>

#define SIZE 5

int main(void)
{
    int arr[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    printf("Row totals: ");
    for (int i = 0; i < SIZE; i++)
    {
        int sum = 0;
        for (int j = 0; j < SIZE; j++)
        {
            sum += arr[i][j];
        }
        printf("%d ", sum);
    }
    printf("\n");

    printf("Column totals: ");
    for (int i = 0; i < SIZE; i++)
    {
        int sum = 0;
        for (int j = 0; j < SIZE; j++)
        {
            sum += arr[j][i];
        }
        printf("%d ", sum);
    }
    printf("\n");

    return 0;
}