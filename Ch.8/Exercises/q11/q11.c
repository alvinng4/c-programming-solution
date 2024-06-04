#include <stdio.h>

#define DIM 8

int main(void)
{
    char checker_board[DIM][DIM];

    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            if ((i + j) % 2 == 0)
            {
                checker_board[i][j] = 'B';
            }
            else
            {
                checker_board[i][j] = 'R';
            }
        }
    }

    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            printf("%c ", checker_board[i][j]);
        }
        printf("\n");
    }
}