#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string word = get_string("Word: ");
    int length = strlen(word);
    {
    printf("First: %c\n", (char) word[0]);
    }

    printf("Last: %c\n", (char) word[length - 1]);
    }
