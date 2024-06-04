// B1FF filter
#include <ctype.h>
#include <stdio.h>

#define MAX_LEN 250

int main(void)
{
    char msg[250];

    printf("Enter message: ");
    for (int i = 0; i < MAX_LEN; i++)
    {
        msg[i] = getchar();
        if (msg[i] == '\n')
        {
            break;
        }
    }

    printf("In B1FF-speak: ");
    for (int i = 0; i < MAX_LEN; i++)
    {
        char temp_char = toupper(msg[i]);
        if (temp_char == '\n')
        {
            printf("!!!!!!!!!!\n");
            break;
        }

        switch (temp_char)
        {
            case 'A':
                temp_char = '4';
                break;
            case 'B':
                temp_char = '8';
                break;
            case 'E':
                temp_char = '3';
                break;
            case 'I':
                temp_char = '1';
                break;
            case 'O':
                temp_char = '0';
                break;
            case 'S':
                temp_char = '5';
                break;
        }
        
        putchar(temp_char);
    }

    return 0;
}