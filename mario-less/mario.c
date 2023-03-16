#include <cs50.h>
#include <stdio.h>

int pyramid(void);

int main(void)
{
    //ask user for a positive integer 'height' of the pyramid
    int height;
    do
    {
        height = get_int("How tall should the pyramid be? ");
    }
    while (height < 0 || height > 8);

    int width = 1;

//Create a left-aligned pyramid using height
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("#");
        }
        width++;
        printf("\n");
    }
}