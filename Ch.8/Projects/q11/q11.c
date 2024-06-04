#include <stdio.h>
#include <string.h>

#define MAX_SIZE 15

int main(void)
{
    printf("Enter phone number: ");

    char temp_phone_num[MAX_SIZE];
    int i;
    for (i = 0; i < MAX_SIZE; i++)
    {
        temp_phone_num[i] = getchar();

        if (temp_phone_num[i] == '\n')
        {
            break;
        }
    }
    char phone_num[i];
    memcpy(phone_num, temp_phone_num, i * sizeof(char));

    for (int i = 0; i < (int) (sizeof(phone_num) / sizeof(phone_num[0])); i++)
    {
        switch (phone_num[i])
        {
            case 'A': case 'B': case 'C':
                putchar('2');
                break;
            case 'D': case 'E': case 'F':
                putchar('3');
                break;
            case 'G': case 'H': case 'I':
                putchar('4');
                break;
            case 'J': case 'K': case 'L':
                putchar('5');
                break;
            case 'M': case 'N': case 'O':
                putchar('6');
                break;
            case 'P': case 'R': case 'S':
                putchar('7');
                break;
            case 'T': case 'U': case 'V':
                putchar('8');
                break;
            case 'W': case 'X': case 'Y':
                putchar('9');
                break;
            default:
                putchar(phone_num[i]);
                break;
        }
    }
    putchar('\n');

    return 0;
}