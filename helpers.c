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
            float avg = round((image[h][w].rgbtBlue + image[h][w].rgbtGreen + image[h][w].rgbtRed) / 3);
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

    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width / 2; w++)
        {
            RGBTRIPLE tmp = image[h][w];
            image[h][w] = image[h][width - (w + 1)];
            image[h][width - (w + 1)] = tmp;
        }
    }
    return;

}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{

    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {

            for (int x = -1; x < 2; x++)
            {
                for (int y = -1; y < 2; y++)
                {

                    float avgBlue = round((image[h][w].rgbtBlue + image[h][w].rgbtBlue + image[h][w].rgbtBlue) / 9);
                    float avgGreen = round((image[h][w].rgbtGreen+ image[h][w].rgbtGreen + image[h][w].rgbtGreen) / 9);
                    float avgRed = round((image[h][w].rgbtRed + image[h][w].rgbtRed + image[h][w].rgbtRed) / 9);
                    image[h][w].rgbtBlue = avgBlue;
                    image[h][w].rgbtGreen = avgGreen;
                    image[h][w].rgbtRed = avgRed;
                }
            }
        }
    }
    return;

}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
