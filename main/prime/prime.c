#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    if ( number <= 1)
    {
        return false;
    }
    if (number == 2)
    {
        return true;
    }
    for (int i = 2; i < number; i++)
    {
        // Aquí verificas: ¿number es divisible por i?
        // Si SÍ es divisible (residuo = 0), entonces NO es primo

        // TU CÓDIGO AQUÍ
        // Pista: usa el operador %
        // Pista: si encuentras un divisor, return false inmediatamente
    }

    // Si llegaste aquí, significa que NO encontraste ningún divisor
    // Por lo tanto, el número ES primo
    return true;
}
