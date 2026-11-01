#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long card = 378282246310005;
    long temp = card;
    long temp2 = card;
    while ( temp > 10)
    {
        temp = temp / 10;

    }

    while (temp2 > 100)
    {
        temp2 = temp2 / 10;

    }
    int first = temp;
    int second = temp2;


    printf("first: %i\n", first);
    printf("seconds: %i\n", second);
}
