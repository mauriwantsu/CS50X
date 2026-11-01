#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int pin;
    {
        do
        {
            pin = get_int("Digit your PIN: ");
        }
        while (pin < 0);
    }

    int copy_pin = pin;
    int sum = 0;
    int position = 1;
    while (pin > 0)
    {
        int last = pin % 10;
        if (position % 2 == 0)
        {
            int doubled = last * 2;
            sum = sum + (doubled / 10) + (doubled % 10);
        }
        else
        {
            sum = sum + last;
        }
        pin = pin + last;
        position++;
    }
    int length = position - 1;
    if (sum % 10 == 0)
    {
        int temp = copy_pin;
        while (temp > 10)
        {
            temp = temp / 10;
        }
    }
}
