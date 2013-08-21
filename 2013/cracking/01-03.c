// Design an algorithm and write code to remove the duplicate characters in a string without using any additional buffer. 
// NOTE: One or two additional variables are fine. An extra copy of the array is not.

#include <stdio.h>
#include <stdbool.h>

char* remove_duplicates(char* input)
{
  bool a[256] = {false};

  char *c = input;
  char *d = input;

  while(*c != '\0')
  {
    int ch = (int)*c;

    if (!a[ch])
    {
      a[ch] = true;
      
      if (d != c)
      {
        *d = *c;
      }

      d++;
    }

    c++;
  }

  *d = '\0';

  return input;
}

int main()
{
  char input[] = "abababc";
  printf("removed duplicates: %s\n", remove_duplicates(input));
  return 0;
}