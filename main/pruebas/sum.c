#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //First, prompt the user for input
    long card = 567;
    int sum = 0;

    while (card > 0)
    {
        int last = card % 10;
        sum = sum + last;
        card = card / 10;

    }
    printf("Sum of digits: %i\n", sum);







    //Card length Starting Digit?
}
