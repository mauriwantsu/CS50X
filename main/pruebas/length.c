#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long card = 123456;
    int length = 0;
    long temp = card;
    while ( temp > 0)
    {
        temp = temp /10;
        length++;
    }

    printf("length: %i\n", length);
}
