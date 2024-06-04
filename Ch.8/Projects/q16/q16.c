#include <ctype.h>
#include <stdio.h>

int main(void)
{
    printf("Enter first word: ");
    char ch;
    int occurrences[26] = {0};
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            occurrences[tolower(ch) - 'a']++;
        }
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            occurrences[tolower(ch) - 'a']--;
        }
    }

    int i;
    for (i = 0; i < 26; i++)
    {
        if (occurrences[i] != 0)
        {
            break;
        }
    }
    
    if (i == 26)
    {
        printf("The words are anagrams.\n");
    }
    else
    {
        printf("The words are not anagrams.\n");
    }

    return 0;
}
