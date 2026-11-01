#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    //Check number of arguments
    if (argc != 2)
    {
        printf("Usage: ./subsitution key\n");
        return 1; //Return 1 is error, Return 0 is succesfull
    }

    //Get from the user the [1] which would be the key
    string key = argv[1];

    //Condition that if the string length is more or less than 26, print an error
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }

    //Checks the 26 characters and it fills all the 26 arrays with 0s
    int seen[26] = {0};

    //Creates i and n with their values, condtion is one must be less than the other, update is i adds one each loop (up until 25 so 26 in total counting 0)
    for (int i = 0, n = strlen(key); i < n; i++)
    {
        //i is the character position, key is the character itself, if its not a letter, print out message (!)Not (isalpha) letter
        if (!isalpha (key[i]))
        {
            printf("Key must only contain letters.\n");
            return 1;
        }

        //Character variable names letter converts it to uppercase
        char letter = toupper(key[i]);

        //CRITICAL ASCII math, Whatever letter - 65(A) gives you the position in the alphabet, easier to track the encryption that way and converts it into a variable named index
        int index = letter - 'A';

        //Array access gets value on position with index and seen, it then checks if we saw it already if the teh character is already 1 we already saw it
        if (seen[index] == 1)
        {
            printf("Error: duplicate letter\n");
            return 1;
        }

        //If we didnt see it before, it continues and then (=) Assigns it to 1, so if its repeated it will now know (==) euqal to (=) Assign to
        seen[index] = 1;
    }

    //Print the prompt plaintext and then gets user input right next to prompt, thats why no newline
    printf("plaintext: ");
    string plaintext = get_string("");

    printf("ciphertext: ");

    //Now the hard part, the encryption loop, same pattern as before we just change to plaintext which would be the length now
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
    //First check if the current character we are looking at plaintext[i] is upper case, if so:
    if (isupper(plaintext[i]))
    {
        //Create a variable integer called position, and its going to be the character minus 65(A) that gives you the position. Then inside of the key we count the position and make it a variable called encrypted to then make it uppercase and print it out
        int position = plaintext[i] - 'A';
        char encrypted = key[position];
        encrypted = toupper(encrypted);
        printf("%c", encrypted);
    }

    else if (islower(plaintext[i]))
    {
        //Same process as above but only if the character came in as lowercase and does the same, calculation so it turns lower and upper case letters to the currect letters int he encryption
        int position = plaintext[i] - 'a';
        char encrypted = key[position];
        encrypted = tolower(encrypted);
        printf("%c", encrypted);
    }

    else
    {
        //Meaning, if its not an upper or lowercase letter its probably a number or punctuation so just print it out the same way it comes in
        printf("%c", plaintext[i]);
    }
    }
    //After all this, create a newline and return it as succesfull
    printf("\n");
    return 0;
    //Will it work??
}
