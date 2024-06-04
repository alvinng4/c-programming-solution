#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define WIDTH 10
#define HEIGHT 10

int unbiased_randint(int min, int max);

int main(void)
{
    printf("Random walk\n\n");

    // Set the seed for rand()
    srand((unsigned) time(NULL));

    // Generate a (width, height) map filled with '.'
    char map[WIDTH][HEIGHT];
    memset(map, '.', sizeof(map));

    // Initialize characters with capital alphabets
    char characters[26];
    for (int i = 0; i < 26; i++)
    {
        characters[i] = 'A' + i;
    }

    // Initial position
    int x;
    int y;
    printf(
        "Enter the initial position in the %d by %d grid, where (0, 0) is the upper left corner.\n", 
        WIDTH, HEIGHT
    );

    while (1)
    {
        printf("x: ");
        scanf("%d", &x);

        if (x < 0)
        {
            printf("x must be larger than 0!\n");
        }
        else if (x >= WIDTH)
        {
            printf("x must be smaller than %d!\n", WIDTH);
        }
        else
        {
            break;
        }
    }

    while (1)
    {
        printf("y: ");
        scanf("%d", &y);

        if (y < 0)
        {
            printf("y must be larger than 0!\n");
        }
        else if (y >= WIDTH)
        {
            printf("y must be smaller than %d!\n", HEIGHT);
        }
        else
        {
            break;
        }
    }

    map[x][y] = 'A';

    /*
        Definition for directions:
            0: up
            1: right
            2: down
            3: left
    */

    for (int i = 1; i < 26; i++)
    {
        while (1)
        {
            // Check if current position is surrounded
            bool surrounded = true;
            if (!((y + 1 >= HEIGHT) || (map[x][y + 1] != '.')))
            {
                surrounded = false;
            }
            else if (!((x + 1 >= HEIGHT) || (map[x + 1][y] != '.')))
            {
                surrounded = false;
            }
            else if (!((y - 1 < 0) || (map[x][y - 1] != '.')))
            {
                surrounded = false;
            }
            else if (!((x - 1 < 0) || (map[x - 1][y] != '.')))
            {
                surrounded = false;
            }
            if (surrounded)
            {
                goto end_of_loop;
            }

            switch(unbiased_randint(0, 3))
            {
                case 0:
                    if ((y + 1 >= HEIGHT) || (map[x][y + 1] != '.'))
                    {
                        continue;
                    }
                    else
                    {
                        y++;
                    }
                    break;
                case 1:
                    if ((x + 1 >= HEIGHT) || (map[x + 1][y] != '.'))
                    {
                        continue;
                    }
                    else
                    {
                        x++;
                    }
                    break;
                case 2:
                    if ((y - 1 < 0) || (map[x][y - 1] != '.'))
                    {
                        continue;
                    }
                    else
                    {
                        y--;
                    }
                    break;
                case 3:
                    if ((x - 1 < 0) || (map[x - 1][y] != '.'))
                    {
                        continue;
                    }
                    else
                    {
                        x--;
                    }
                    break;
                default:
                    printf("Error: Invalid value.");
                    return 1;
            }
            map[x][y] = characters[i];
            break;
        }
    }
    end_of_loop: /* Null statement */;

    // Print out the final map
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int unbiased_randint(int min, int max)
{
    return (int) (min + rand() / (RAND_MAX / (max - min + 1) + 1));
}