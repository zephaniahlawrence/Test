#include "helpers.h"
#include <math.h>
#include <stdio.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            RGBTRIPLE[image[height][width]].rgbtBlue = 0;
            RGBTRIPLE[image[height][width]].rgbtGreen = 0;
            RGBTRIPLE[image[height][width]].rgbtRed = 0;
        }
    }
    return;



BYTE avg = round(image[height][width].rgbtBlue + image[height][width].rgbtGreen + image[height][width].rgbtRed) / 3;

    RGBTRIPLE b = image[height][width].rgbtBlue;
    RGBTRIPLE g = image[height][width].rgbtGreen;
    RGBTRIPLE r = image[height][width].rgbtRed;
    RGBTRIPLE avg = round((b + g + r) / 3);

    int *b = image[height][width].rgbtBlue;
    int *g = image[height][width].rgbtGreen;
    int *r = image[height][width].rgbtRed;
    int avg = round((b + g + r) / 3);

    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            image[height][width].rgbtBlue++;
            image[height][width].rgbtGreen++;
            image[height][width].rgbtRed++;
            int avg = round((b + g + r) / 3);
        }
    }
    return;






    RGBTRIPLE ni[h][w];
    while (fread(ni[h][w], sizeof(RGBTRIPLE), height, image[height][width]))
    {
        ni[h][w] *= 1000;
        fwrite(ni, sizeof(RGBTRIPLE), height, image[height][width]);
    }
    return;
}

    RGBTRIPLE ni[h][w];
    fread(ni[h][w], sizeof(RGBTRIPLE), height - 1, image[height][width]);

        fwrite(ni[h][w], sizeof(RGBTRIPLE), height - 1, image[height][width]);
    }



    int16_t buffer;
    while (fread(&buffer, sizeof(int16_t), 1, input))
    {
        buffer *= factor;
        fwrite(&buffer, sizeof(int16_t), 1, output);
    }

    uint8_t header[HEADER_SIZE];
    fread(header, HEADER_SIZE, 1, input);
    fwrite(header, HEADER_SIZE, 1, output);


    int b = image[height][width].rgbtBlue;
    int g = image[height][width].rgbtGreen;
    int r = image[height][width].rgbtRed;
    int avg = round((b + g + r) / 3);

    for (int h = 0; h < height - 1; h++)
    {
        for (int w = 0; w < width - 1; w++)
        {
            if ()
            b = image[h][w].rgbtBlue++;
            g = image[h][w].rgbtGreen++;
            r = image[h][w].rgbtRed++;
        }
    }

    for (int h = 0; h < height - 1; h++)
    {
        for (int w = 0; w < width - 1; w++)
        {
            image[h][w].rgbtBlue = avg;
            image[h][w].rgbtGreen = avg;
            image[h][w].rgbtRed = avg;
        }
    }
    return;

}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{

                RGBTRIPLE cpy[h][w] = image[h][w];
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
