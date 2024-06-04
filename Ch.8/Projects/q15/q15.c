#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define SIZE 300

int main(void)
{
    printf("Enter message to be encrypted: ");

    char temp_msg[SIZE];
    int i;
    char ch;
    for (i = 0; i < SIZE; i++)
    {
        if ((ch = getchar()) == '\n')
        {
            temp_msg[i] = '\0';
            break;
        }
        temp_msg[i] = ch;
    }

    char msg[i + 1];
    memcpy(msg, temp_msg, sizeof(msg));

    int shift_amount;
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    // Encrypt the message
    char encrypted_msg[i + 1];
    encrypted_msg[i] = '\0';
    for (i = 0; i < (int) (sizeof(msg) / sizeof(msg[0])); i++)
    {
        if (isupper(msg[i]))
        {
            encrypted_msg[i] = ((msg[i] - 'A') + shift_amount) % 26 + 'A';
        }
        else if (islower(msg[i]))
        {
            encrypted_msg[i] = ((msg[i] - 'a') + shift_amount) % 26 + 'a';
        }
        else
        {
            encrypted_msg[i] = msg[i];
        }
    }

    printf("Encrypted mesage: %s\n", encrypted_msg);

    return 0;
}