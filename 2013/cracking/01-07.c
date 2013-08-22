// Write an algorithm such that if an element in an MxN matrix is 0, its entire row and
// column is set to 0.

#include <stdio.h>
#include <stdbool.h>

int set_zeros(int a[256][256], int m, int n)
{
  for (int row = 0; row < m; row++)
  {
    bool shouldBreak = false;

    for (int column = 0; column < m; column++)
    {
      if (a[row][column] == 0)
      {
        for (int x = 0; x < m; x++)
        {
          a[x][column] = 0;
        }

        for (int x = 0; x < n; x++)
        {
          a[row][x] = 0;
        }

        shouldBreak = true;
        break;
      }
    }

    if (shouldBreak)
    {
      break;
    }
  }
}

int main()
{
  int n = 5;
  int m = 5;
  int image[256][256] = {{0}};

  for (int row = 0; row < m; row++)
  {
    for (int column = 0; column < n; column++)
    {
      if (row != 2 || column != 2)
      {
        image[row][column] = row * n + column + 1;
      }

      printf("%02d ", image[row][column]);
    }

    printf("\n");
  }

  printf("\n");

  set_zeros(image, m, n);

  for (int row = 0; row < m; row++)
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
