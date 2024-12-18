#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cipher(int k, string p);

int main(int argc, char *argv[])
{
    // accept a single command line argument
    if (argc != 2)
    {
        printf("Error: invalid number of command-line arguments. Usage: ./caesar key\n.");
        return 1;
    }

    char *key = argv[1];

    // command-line argument must be a decimal number
    for (int i = 0; i < (strlen(key)); i++)
    {
        if (!isdigit(key[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    int k = atoi(key);

    string plaintext = get_string("plaintext:  ");

    cipher(k, plaintext);

    return 0;
}

void cipher(int k, string p)
{
    int len = strlen(p);
    char c[len];

    // convert plaintext to cyphertext
    for (int i = 0; i < len; i++)
    {
        if (isalpha(p[i]))
        {
            if (isupper(p[i]))
            {
                c[i] = (p[i] - 'A' + k) % 26 + 'A';
            }
            else if (islower(p[i]))
            {
                c[i] = (p[i] - 'a' + k) % 26 + 'a';
            }
        }
        else
        {
            c[i] = p[i];
        }
    }
    c[len] = '\0';
    printf("ciphertext:  %s", c);
    printf("\n");
}
