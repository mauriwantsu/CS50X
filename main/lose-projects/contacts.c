#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int contacts = get_int("How many contacts? ");

    typedef struct
    {
        string name;
        string number;
        string email;

    } person;

    person people[contacts];
    for (int i = 0; i < contacts; i++)
    {
    people[i].name = get_string("Name: ");
    people[i].number = get_string("Number: ");
    people[i].email = get_string("Email: ");
    }

    string name = get_string("Who Are You Lookig For? ");

    for (int i = 0; i < contacts; i++)
    {
        if(strcmp(people[i].name, name) == 0)
        {
            printf("Found \nName: %s \nNumber: %s \nEmail: %s\n", people[i].name, people[i].number, people[i].email);
            return 0;
        }
    }

    printf("Not Found\n");
    return 1;

}
