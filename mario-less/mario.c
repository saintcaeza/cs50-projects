#include <cs50.h>
#include <stdio.h>

int pyramid(int height);

int main(void)
{
    //ask user for a positive integer 'height' of the pyramid
    int height;
    do
    {
        height = get_int("How tall should the pyramid be? ");
    }
    while (height < 0 || height > 8);

    int n = 1;
     for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
            if (n < height)
            {
                n++;
            }
        }
        printf("\n");
    }
}

 //Create a left-aligned pyramid using height
/*nt pyramid(int height)
{
    }
}*/