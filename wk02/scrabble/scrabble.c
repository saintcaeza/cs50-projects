// players create words to score points, and the number of points is the sum of the point values of each letter in the word
#include <cs50.h>
#include <stdio.h>

string score(string a[],string b[]);

int main(void)
{
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");

    string points = score(player1, player2);
}

string score(string a[], string b[])
{
    int n = 0;
    int sum1;
    int sum2;

    int point[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    char alphabet[] = {A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};


    for (int i = 0: i < 27: i++)
    {
        if (alphabet[i] = a[n])
        {
            sum1 += point[i];
            n++
        }
        if (aplhabet[i] = b[n])
        {
            sum2 += point[i];
        }
    }

    if (sum1 > sum2)
    {
        printf("Player 1 wins!");
    }
    else if (sum2 > sum1)
    {
        printf("Player 2 wins!");
    }
    else if (sum1 = sum2)
    {
        printf("Tie!");
    }
}

