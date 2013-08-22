// Write a method to replace all spaces in a string with ‘%20’.

#include <stdio.h>

char* encode(char* str)
{
  char* b = str;

  int numberOfSpaces = 0;
  int length = 0;

  while (*b != '\0')
  {
    if (*b == ' ')
    {
      numberOfSpaces++;
    }

    length++;
    b++;
  }

  int index = length + 2*numberOfSpaces;

  str[index] = '\0';
  index--;

  for (int i = (length - 1); i >= 0; i--)
  {
    if (str[i] == ' ')
    {
      str[index--] = '0';
      str[index--] = '2';
      str[index--] = '%';
    }
    else
    {
      str[index--] = str[i];
    }
  }

  return str;
}

int main()
{
  char input[256] = "Need to be encoded\0";
  printf("Encoded: %s\n", encode(input));
  return 0;
}