#include <stdio.h>

#define SIZE 300

int main(void)
{
    char sentence[SIZE];
    char terminating_char;
    printf("Enter a sentence: ");

    // Obtain the sentence and terminating character
    int i;
    for (i = 0; i < SIZE; i++)
    {
        char ch = getchar();
        if (ch == '.' || ch == '?' || ch == '!')
        {
            terminating_char = ch;
            i--;
            break;
        }
        else
        {
            sentence[i] = ch;
        }
    }

    // Printing the sentence in reverse
    int j = 0;
    for (; i >= 0; i--)
    {
        char rev_word[SIZE];
        
        if (sentence[i] == ' ')
        {
            for (j--; j >= 0; j--)
            {
                putchar(rev_word[j]);
            }
            if (i > 0)
            {
                putchar(' ');
                j = 0;
            }
        }
        else if (i == 0)
        {
            rev_word[j] = sentence[i];
            for (;j >= 0; j--)
            {
                putchar(rev_word[j]);
            }
        }
        else
        {
            rev_word[j] = sentence[i];
            j++;
        }
    }
    putchar(terminating_char);
    putchar('\n');

    return 0;
}