#include <stdio.h>

#define SIZE 50

int main(void)
{
    printf("Enter a first and last name: ");
    char ch = getchar();
    while (ch == ' ')
    {
        ch = getchar();
    }
    char first_name_first_char = ch;

    while (getchar() != ' ')
    {
        /* Null statement */;
    }

    char last_name[SIZE];
    int i;
    for (i = 0; i < SIZE; i++)
    {
        ch = getchar();
        if (ch != '\n')
        {
            last_name[i] = ch;
        }
        else
        {
            last_name[i] = '\0';
            break;
        }
    }

    printf("You entered the name: %s, %c.\n", last_name, first_name_first_char);

    return 0;
}