#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string word = get_string("Sentence: ");
    char letter = get_char("What character do I look for? ");
    int count = 0;

     for (int i = 0, n = strlen(word); i < n; i++)
     {
        if (word[i] == letter)
        {
            count++;
        }
     }
     printf("There are %i characters in that sentence.\n", count);
}
