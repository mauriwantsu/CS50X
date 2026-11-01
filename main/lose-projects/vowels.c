#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get word from user
    string word = get_string("Word: ");

    // Create counter starting at 0
    int count = 0;

    // Loop through each character
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        // Check if current character is a vowel
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
    word[i] == 'o' || word[i] == 'u' ||
    word[i] == 'A' || word[i] == 'E' || word[i] == 'I' ||
    word[i] == 'O' || word[i] == 'U')
        {
            // Increase count
            count++;
        }
    }

    // Print result
    printf("Vowels: %i\n", count);
}
