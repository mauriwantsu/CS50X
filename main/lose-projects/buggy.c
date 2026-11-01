#include <cs50.h>
#include <stdio.h>

void print_column(int height);

int main(void)
{
    int h = get_int("Height: ");
    print_column(h); // SET BREAKPOINT HERE
}
void print_column(int height)
{
    for (int i = 0; i <= height; i++) // BUG should be
    {
        printf("#\n");
    }
}
