#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user for change owed, in cents
    int cents;
    do
    {
        cents = get_int(" Change owed: ");
    }
    while (cents < 0);

    int coins = 0;

    //Calculate number of quarters to give
    int quarters = cents / 25;

    // Store results
    coins = coins + quarters;

    // Subtract value from cents
    cents = cents % 25;

    // Calculate number of dimes
    int dimes = cents / 10;
    coins = coins + dimes;

    // Subtract value from cents
    cents = cents % 10;

    //Calculate number of nickels
    int nickels = cents / 5;
    coins = coins + nickels;

    // Subtract value
    cents = cents % 5;

    // Calculate pennies
    int pennies = cents;
    coins = coins + pennies;

    // Print sum
    printf("%i\n", coins);


}


