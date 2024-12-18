#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

//Creates an integer variable 'ammount' and accepts inputs greater than 0
int get_cents(void)
{
    int ammount;
    do
    {
        ammount = get_int("How many cents are you owed? ");
    }
    while (ammount < 0);
    return ammount;
}

//For loop counts how many set's of "25" exists in 'cents' and increases quarters by 1 for each set
int calculate_quarters(int cents)
{
    int quarters = 0;
    for (int i = 24; i < cents; i += 25)
    {
        quarters ++;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    int dime = 0;
    for (int i = 9; i < cents; i += 10)
    {
        dime ++;
    }
    return dime;
}

int calculate_nickels(int cents)
{
    int nickels = 0;
    for (int i = 4; i < cents; i += 5)
    {
        nickels ++;
    }
    return nickels;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
    for (int i = 0; i < cents; i++)
    {
        pennies ++;
    }
    return pennies;
}