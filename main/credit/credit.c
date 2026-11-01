#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long card;

    {
         do
    {
        card = get_long("Credit card number: ");
    }
    while (card <= 0);

}
long copy_card = card;
long sum = 0;
int position = 1;
while (card > 0)
{
    int last = card % 10;
    if (position % 2 == 0)
    {
        int doubled = last * 2;
sum = sum + (doubled / 10) + (doubled % 10);
    }
    else
    {
        sum = sum + last;
    }
    card = card / 10;
    position++;

}
int length = position - 1;
if (sum % 10 == 0)
{
    long temp = copy_card;
    long temp2 = copy_card;
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


    // printf("first: %i\n", first);
   // printf("second: %i\n", second);

    if ( length == 15 && (second == 34 || second == 37))
    {
        printf("AMEX\n");
    }
    else if (length == 16 && (second >= 51 && second <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((length == 13 || length == 16) && first == 4)
    {
        printf("VISA\n");
    }
    else
{
    printf("INVALID\n");
}
}
else
{
    printf("INVALID\n");
}


}
