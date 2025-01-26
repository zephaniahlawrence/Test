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

    uint8_t header[HEADER_SIZE];
    uint8_t *header = malloc(sizeof(uint8_t) * HEADER_SIZE);
    while (fread(header, sizeof(uint8_t), HEADER_SIZE, input) != EOF)
    {
        if (header == sizeof(uint8_t))
        {
            fwrite(header, sizeof(uint8_t), HEADER_SIZE, output);
        }
    }

    // TODO: Read samples from input file and write updated data to output file

    //from 44bytes to the EOF

    int16_t buffer;
    int16_t *buffer = malloc(sizeof(int16_t) * wav);
    while (fread(&buffer, sizeof(int16_t), wav, input) != EOF)
    {
        fseek(input, 44L, SEEK_SET);
        if (buffer == sizeof(int16_t))
        {
            fwrite(&buffer, (sizeof(int16_t) * factor), wav, output);
        }
    }
    free(header);
    free(buffer);

    // Close files
    fclose(input);
    fclose(output);
}
