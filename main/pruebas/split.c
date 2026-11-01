#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long number = 567;
    int position = 1;
    int sum = 0;
    while (number > 0)
    {
        int digit = number % 10;
        if (position % 2 == 0)
       {
    int doubled = digit * 2;
    int sum_of_digits = (doubled / 10) + (doubled % 10);
    sum = sum + sum_of_digits;
}
        else
        {
            sum = sum + digit;
        }
        number = number / 10;
        position++;
    }
    printf("sum: %i\n", sum);
}
