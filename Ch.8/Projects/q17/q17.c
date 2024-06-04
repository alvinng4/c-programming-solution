#include <stdbool.h>
#include <stdio.h>

bool check_bound(int x,  int dx, int width);

int main(void)
{
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    int magic_sq_size;
    while (1)
    {
        printf("Enter size of magic square: ");
        scanf("%d", &magic_sq_size);
        if (magic_sq_size <= 0 || magic_sq_size > 99 || (magic_sq_size % 2) == 0)
        {
            printf("Invalid value! Please try again.\n\n");
        }
        else
        {
            break;
        }
    }
    
    int arr[magic_sq_size][magic_sq_size];
    for (int i = 0; i < magic_sq_size; i++)
    {
        for (int j = 0; j < magic_sq_size; j++)
        {
            arr[i][j] = 0;
        }
    }
    /*
    *    Origin: Top Left corner
    */
    int x_0 = magic_sq_size / 2;
    int y_0 = 0;
    int x_1 = x_0;
    int y_1 = y_0;
    for (int i = 1; i <= (magic_sq_size * magic_sq_size); i++)
    {
        arr[y_0][x_0] = i;
    
        if (check_bound(x_0, 1, magic_sq_size))
        {
            x_1 = 0;
        }
        else
        {
            x_1 = x_0 + 1;
        }

        if (check_bound(y_0, -1, magic_sq_size))
        {
            y_1 = magic_sq_size - 1;
        }
        else
        {
            y_1 = y_0 - 1;
        }

        if (arr[y_1][x_1] != 0)
        {
            if (check_bound(y_0, 1, magic_sq_size))
            {
                y_0 = 0;
            }
            else
            {
                y_0++;
            }
        }
        else
        {
            y_0 = y_1;
            x_0 = x_1;
        }
    }

    // Print 2d arr, with top left being the origin
    for (int y = 0; y < magic_sq_size; y++)
    {
        for (int x = 0; x < magic_sq_size; x++)
        {
            printf("%5d", arr[y][x]);
        }
        printf("\n");
    }

    return 0;
}

bool check_bound(int x,  int dx, int width)
{
    return (x + dx >= width || x + dx < 0);
}
