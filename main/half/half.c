// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    float tip_percent = get_float("Tip percent: ");

    tax_percent = (tax_percent / 100) * bill_amount;
    float copy_bill_amount = bill_amount + tax_percent;
    tip_percent = (tip_percent / 100) * copy_bill_amount;
    float total = tip_percent + copy_bill_amount;



    printf("You will owe $%.2f each!", total / 2);
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    return 0.0;
}
