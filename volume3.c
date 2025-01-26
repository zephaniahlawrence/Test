// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TODO: Copy header from input file to output file



    uint8_t h[HEADER_SIZE];
    uint8_t *h = malloc(sizeof(uint8_t) * HEADER_SIZE);
    while (fread(h, sizeof(uint8_t), HEADER_SIZE, input))
    {
        if (h == sizeof(uint8_t))
        {
            fwrite(h, sizeof(uint8_t), HEADER_SIZE, output);
        }
        if 
    }

    // TODO: Read samples from input file and write updated data to output file

    int wav = input - HEADER_SIZE;

    uint16_t buffer;
    uint16_t *buffer = malloc(sizeof(int16_t) * wav);



    while (fread(&buffer, sizeof(uint16_t), wav, output))
    {
        if(buffer == sizeof(uint16_t))
        {
            fwrite(&buffer, (sizeof(uint16_t) * factor), , output);
        }
    }
    free(c);

    // Close files
    fclose(input);
    fclose(output);
}
