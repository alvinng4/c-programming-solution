#include <stdio.h>

#define SIZE 5

int main(void)
{
    int arr[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter %d quiz scores of student %d: ", SIZE, i + 1);
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    int sum[SIZE] = {0};
    int low[SIZE];
    int high[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        int max = arr[i][0];
        int min = max;
        for (int j = 0; j < SIZE; j++)
        {
            sum[i] += arr[i][j];
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            else if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
        low[i] = min;
        high[i] = max;
    }

    int total_sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        total_sum += sum[i];
    }
    printf("Total score: %d\n", total_sum);
    printf("Average score: %d\n", total_sum / (SIZE * SIZE));
    printf("\n");
    
    for (int i = 0; i < SIZE; i++)
    {
        printf("Quiz %d:\n", i + 1);
        printf("\tMean: %d\n", sum[i] / SIZE);
        printf("\tHigh score: %d\n", high[i]);
        printf("\tLow score:  %d\n", low[i]);
        printf("\n");
    }

    return 0;
}