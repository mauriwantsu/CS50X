#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int red = image[i][j].rgbtRed;
            int green = image[i][j].rgbtGreen;
            int blue = image[i][j].rgbtBlue;

            int average = round((red + green + blue) / 3.0);

            image[i][j].rgbtRed = average;
            image[i][j].rgbtGreen = average;
            image[i][j].rgbtBlue = average;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            RGBTRIPLE temp = image[i][j];
            image[i][j] = image[i][width - 1 - j];
            image[i][width - 1 - j] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE copy[height][width];

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                float sumRed = 0;
                float sumGreen = 0;
                float sumBlue = 0;

                int counter = 0;

                for (int di = -1; di <= 1; di++)
                {
                    for (int dj = -1; dj <= 1; dj++)
                    {
                        if (i + di >= 0 && i + di < height && j + dj >= 0 && j + dj < width)
                        {
                            sumRed += copy[i + di][j + dj].rgbtRed;
                            sumGreen += copy[i +  di][j + dj].rgbtGreen;
                            sumBlue += copy[i + di][j + dj].rgbtBlue;
                            counter++;
                        }
                    }
                }
                    image[i][j].rgbtRed = round(sumRed / counter);
                    image[i][j].rgbtGreen = round(sumGreen / counter);
                    image[i][j].rgbtBlue = round(sumBlue / counter);
            }
        }
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    int gx[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
    int gy[3][3] = {{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};
    RGBTRIPLE copy[height][width];

    for (int i = 0; i < height; i ++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float gxRed = 0;
            float gyRed = 0;
            float gxGreen = 0;
            float gyGreen = 0;
            float gxBlue = 0;
            float gyBlue = 0;

            for (int di = -1; di <= 1; di++)
            {
                for (int dj = -1; dj <= 1; dj++)
                {
                    if (i + di >= 0 && i + di < height && j + dj >= 0 && j + dj < width)
                    {
                        gxRed += copy[i + di][j + dj].rgbtRed * gx[di + 1][dj + 1];
                        gyRed += copy[i + di][j + dj].rgbtRed * gy[di + 1][dj + 1];
                        gxGreen += copy[i + di][j + dj].rgbtGreen * gx[di + 1][dj + 1];
                        gyGreen += copy[i + di][j + dj].rgbtGreen * gy[di + 1][dj + 1];
                        gxBlue += copy[i + di][j + dj].rgbtBlue * gx[di + 1][dj + 1];
                        gyBlue += copy[i + di][j + dj].rgbtBlue * gy[di + 1][dj + 1];
                    }
                }
            }

            int red = round(sqrt(gxRed * gxRed + gyRed * gyRed));
            if (red > 255)
            {
                red = 255;
            }
            image[i][j].rgbtRed = red;

            int green = round(sqrt(gxGreen * gxGreen + gyGreen * gyGreen));
            if (green > 255)
            {
                green = 255;
            }
            image[i][j].rgbtGreen = green;

            int blue = round(sqrt(gxBlue * gxBlue+ gyBlue * gyBlue));
            if (blue > 255)
            {
                blue = 255;
            }
            image[i][j].rgbtBlue = blue;

        }
    }

    return;
}

