#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

const int BLOCK_SIZE = 512;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover card.raw\n");
        return 1;
    }

    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
            return 1;
    }

    uint8_t buffer[BLOCK_SIZE];

    int counter = 0;
    FILE *current = NULL;

    while (fread(buffer, 1, BLOCK_SIZE, input) == BLOCK_SIZE)
    {
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            if(current != NULL)
            {
                fclose(current);
            }
            char filename[8];
            sprintf(filename, "%03i.jpg", counter);
            current = fopen(filename, "w");
            counter++;
        }

        if (current != NULL)
        {
            fwrite(buffer, 1, BLOCK_SIZE, current);
        }
    }
    if (current != NULL)
    {
        fclose(current);
    }

    fclose(input);
    return 0;
}

