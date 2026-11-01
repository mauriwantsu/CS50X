#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[5] = {1, 2, 3, 4, 5};  // Solo UN array

    // Forward
    printf("Forward: ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %i ", numbers[i]);
    }
    printf("\n");

    // Backward (MISMO array, diferente dirección)
    printf("Backward:");
    for (int i = 4; i >= 0; i--)
    {
        printf(" %i ", numbers[i]);
    }
    printf("\n");
}
