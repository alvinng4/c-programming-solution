#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int scrabble_value[26];
    for (int i = 0; i < 26; i++)
    {
        switch ('A' + i)
        {
            case 'A': case 'E': case 'I': case 'L':
            case 'N': case 'O': case 'R': case 'S':
            case 'T': case 'U':
                scrabble_value[i] = 1;
                break;
            case 'D': case 'G':
                scrabble_value[i] = 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                scrabble_value[i] = 3;
                break;
            case 'F': case 'H': case 'V': case 'W':
            case 'Y':
                scrabble_value[i] = 4;
                break;
            case 'K':
                scrabble_value[i] = 5;
                break;
            case 'J': case 'X':
                scrabble_value[i] = 8;
                break;
            case 'Q': case 'Z':
                scrabble_value[i] = 10;
                break;
            default:
                printf("Invalid input!\n");
                return 1;
        }
    }

    printf("Enter a word: ");

    int sum = 0;
    char ch;
    do
    {
        ch = toupper(getchar());
        if ('A' <= ch && ch <= 'Z')
        {
            sum += scrabble_value[toupper(ch) - 'A'];
        }
    } while(ch != '\n');

    printf("Scrabble value: %d\n", sum);

    return 0;
}