#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompts user for credit card number.
    long number;
    do
    {
        number = get_long("Give me a credit card number: ");
    }
    while(number < 0);

    //calculate checksum
    long digit = 0;
    long sum = 0;

    //check for the last digits using modulo
    for(long i = 100; i < number; i *= 100)
    {
        digit = number % i;

        //Makes sure whatever is added to the sum is a single digit
        for(j = 10; j < digit; j *= 10);
        {
            digit = digit / j;
            return digit;
        }

        sum = digit * 2
        return sum;
    }
        printf("sum: %li\n", sum);

}
             //Add those products' digits together

    //multiply every other digit by 2, starting with second-to-last digit

        //add the some to the sum of the digits that weren't multiplied by 2

    //check for length and starting digits

    //print AMEX, MASTERCARD, VISA or INVALID
