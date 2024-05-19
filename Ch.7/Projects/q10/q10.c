#include <stdio.h>

int main(void)
{
    printf("Enter a sentence: ");

    int sum = 0;
    for (char ch = getchar(); ch != '\n'; ch = getchar())
    {
        switch (ch)
        {
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'o': case 'O':
            case 'u': case 'U':
                sum++;
                break;
        }
    }

    printf("Your sentence contains %d vowels.\n", sum);

    return 0;
}