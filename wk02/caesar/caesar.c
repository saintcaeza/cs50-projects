#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int N = 25;
char ALPHABET[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

void cipher(string p);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Error: invalid number of command line arguments. Usage: ./caesar key\n.");
        return 1;
    }

    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Error: invalid key! Input numeric character\n");
            return 1;
        }
    }

    cipher(argv[1]);

}

#pseudocode
#1. Accept a single command line argument, a non-negative integer 'k'
#2. If program is executed without any command-line arguments or with more than one command-line argument,
# your program should print an error message of your choice (with printf) and return from main a value of 1 immediately.
