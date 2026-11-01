#include <stdio.h>
#include <cs50.h>

int main(void)
{
    const int N = 5;
    int scores[N];
    {

    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Number: ");

    }

    int largest = scores[0];  // Start with first number as largest
    for(int i = 0; i < N; i++)  
{
    if (scores[i] > largest)  // If current number is bigger
    {
        largest = scores[i];  // Update largest
    }
    printf("Number %i: %i\n", i + 1, scores[i]);
}
printf("Largest: %i\n", largest);
}
}



