//Create 2 adjacent pyramid's with a space in-between them.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt the user for a positive integer between 1 and 8, inclusive; named "height".
    int height = 0;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    printf("stored: %i\n", height);

    //Format and print both adjacent pyramid's according to size, width, space
    
}