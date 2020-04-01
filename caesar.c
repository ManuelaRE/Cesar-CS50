#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main(int argc, string argv[])
{
    if (argc == 2 && isdigit(*argv[1])) // check if user input is a number and of only two arguments
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (isalpha(argv[1][i]) != 0)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        int k = atoi(argv[1]); // tranform the key from string to integer
        string p = get_string("plaintext: \n");
        printf("ciphertext: ");

        for (int i = 0; i < strlen(p); i++) // loop though the user input to change each corresponding char using the key
        {
            if (isupper(p[i]))
            {
                printf("%c", 65 + (p[i] - 65 + k) % 26); // convert ASCII into alhabetical index and apply formula to get the ciphertext.
            }
            else if (islower(p[i]))
            {
                printf("%c", 97 + (p[i] - 97 + k) % 26); // convert ASCII into alhabetical index and apply formula to get the ciphertext.
            }
            else
            {
                printf("%c", p[i]);
            }
        }
        printf("\n");

        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}
