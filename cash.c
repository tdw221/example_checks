#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Define variables
    float total, cents;

    //Prompt input
    do
    {
        printf("Change: ");
        total = get_float();
    }
    while (total < 0);
    //convert dollars to cents and round to integer
    cents = total * 100;
    cents = round(cents);

    //define coins and quarters
    int coins = 0, quarters = 25;

    //start greedy algorithm with while loop for quarters
    while (cents >= 25)
    {
        coins++;
        cents = cents - quarters;
    }

    //define dimes
    int dimes = 10;

    //while loop for dimes
    while (cents >= 10)
    {
        coins++;
        cents = cents - dimes;
    }

    //define nickels
    int nickels = 5;

    //while loop for nickels
    while (cents >= 5)
    {
        coins++;
        cents = cents - nickels;
    }

    //define pennies
    int pennies = 1;

    //while loop for pennies
    while (cents >= 1)
    {
        coins++;
        cents = cents - pennies;
    }

    printf("%i\n", coins);
}
