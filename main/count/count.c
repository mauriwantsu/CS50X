#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string sentence = get_string("Sentence: ");

    int current = 0;
    int longest = 0;
    int words = 1;

    for (int i = 0, n = strlen(sentence); i < n; i++)
    {
        if (sentence[i] != ' ')
        {
            current++;
        }
        else if (sentence[i] == ' ')
        {
            if (current > longest)
            longest = current;
            current = 0;
            words++;
        }

    }

    if (current > longest)
            {
                longest = current;
            }

    int character = strlen(sentence);

    printf("words: %i, characters: %i, longest: %i\n", words, character, longest);
}
