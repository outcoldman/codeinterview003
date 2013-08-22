// Given an image represented by an NxN matrix, where each pixel in the image is 4
// bytes, write a method to rotate the image by 90 degrees. Can you do this in place?

#include <stdio.h>
#include <stdbool.h>

void rotate(int image[256][256], int n)
{
  for (int row = 0; row < n / 2; row++)
  {
    for (int i = row; i < n - row - 1; i++)
    {
      int tmp = image[row][i];
      image[row][i] = image[n - i - 1][row];
      image[n - i - 1][row] = image[n - row - 1][n - i - 1];
      image[n - row - 1][n - i - 1] = image[i][n - row - 1];
      image[i][n - row - 1] = tmp;
    }
  }
}

int main()
{
  int n = 5;
  int image[256][256] = {{0}};

  for (int row = 0; row < n; row++)
  {
    for (int column = 0; column < n; column++)
    {
      image[row][column] = row * n + column + 1;

      printf("%02d ", image[row][column]);
    }

    printf("\n");
  }

  printf("\n");

  rotate(image, n);

  for (int row = 0; row < n; row++)
  {
    for (int column = 0; column < n; column++)
    {
      printf("%02d ", image[row][column]);
    }

    printf("\n");
  }

  printf("\n");

  return 0;
}
