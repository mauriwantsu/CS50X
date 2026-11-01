#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int card = 12345;


    while (card > 0)
    {
    int last = card % 10;
    if (last % 2 == 0)
    {
        printf("%i is even\n", last);
    }
    else
    {
        printf("%i is odd\n", last);
    }

    card = card / 10;
}
}
