// Implement an algorithm to determine if a string has all unique characters. 
// What if you can not use additional data structures?

#include <stdio.h>
#include <stdbool.h>

bool is_unique(char* str)
{
  bool a[256] = {0};

  char* cursor = str;
  while (*cursor != '\0')
  {
    int charIndex = *cursor;

    if (a[charIndex])
    {
      return false;
    }

    a[charIndex] = true;

    cursor++;
  }

  return true;
}

int main()
{
  char test[] = "This";
  printf("This string has only unique values: %d\n", is_unique(test));
  return 0;
}