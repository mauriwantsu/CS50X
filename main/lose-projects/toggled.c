#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string c = get_string("Phrase: ");

    // CREAR DOS CONTADORES
    int letter_count = 0;
    int digit_count = 0;

    for (int i = 0, n = strlen(c); i < n; i++)
    {
        // Si el carácter es letra
        if (isalpha(c[i]))
        {
            letter_count++;// ¿Qué haces aquí?
        }

        // Si el carácter es dígito
        if (isdigit(c[i]))
        {
            digit_count++;// ¿Qué haces aquí?
        }
    }

    // DESPUÉS del loop, imprimir los totales
    printf("Letters: %i\n", letter_count);
    printf("Digits: %i\n", digit_count);
}
