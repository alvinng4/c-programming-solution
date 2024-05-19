#include <stdio.h>

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

    for (ch = getchar(); (ch != '\n') && (ch != ' '); ch = getchar())
    {
        putchar(ch);
    }

    printf(", %c.\n", first_name_first_char);

    return 0;
}