#include <stdio.h>

int main(void)
{
    printf("Enter a sentence: ");
    
    // Remove preceding space and get the first character
    char ch;
    while ((ch = getchar()) == ' ')
    {
        /* Null statement */
    }

    float avg = 0;
    int value = 0;
    int num_of_words = 0;
    while (1)
    {
        if ((ch != ' ') && (ch != '\n'))
        {
            value++;
        }
        else if (ch != '\n')
        {
            avg = avg * num_of_words + value;
            num_of_words++;
            avg /= num_of_words;
            value = 0;
        }
        else
        {
            avg = avg * num_of_words + value;
            num_of_words++;
            avg /= num_of_words;
            break;
        }

        ch = getchar();
    }

    printf("Average word length: %.1f\n", avg);

    return 0;
}