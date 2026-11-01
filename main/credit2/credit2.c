#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //First, prompt the user for input
    long card;

    {
         do
    {
        card = get_long("Credit card number: ");
    }
    while (card <= 0);

    //Calculate the checksum
    int last = card % 10;
    card = card / 10;

    last = card % 10;
    card = card / 10;

    last = card % 10;
    card = card / 10;

    last = card % 10;
    card = card / 10;
    {
        printf("%li\n", card);

    }
    }






    //Card length Starting Digit?
}
