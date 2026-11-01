#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    typedef struct
    {
        string name;
        string number;
        string email;
    } person;

    //Create
    person people[3];

    //Access
    people[0].name = "Mauricio";
    people[0].number = "6563599315";
    people[0].email = "mauricio.sanchezt@outlook.com";

    people[1].name = "Kelly";
    people[1].number = "63945350";
    people[1].email = "kelly.clarckson@gmail.com";

    people[2].name = "Floria";
    people[2].number = "548374023";
    people[2].email = "floriatosca.kerekes@gmail.com";

    string name = get_string("Name: ");

    for (int i = 0; i < 3; i++)
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

