// Write a method to decide if two strings are anagrams or not.

#include <stdio.h>
#include <stdbool.h>

bool are_anagrams(char* str1, char* str2)
{
  int a[256] = {0};
  int unique_letters = 0;

  while (*str1 != '\0')
  {
    int c = (int)*str1;
    a[c]++;

    if (a[c] == 1)
    {
      unique_letters++;
    }

    str1++;
  }

  while (*str2 != '\0')
  {
    int c = (int)*str2;
    a[c]--;

    if (a[c] == 0)
    {
      unique_letters--;
    }
    else if (a[c] < 0)
    {
      break;
    }

    str2++;
  }

  return unique_letters == 0;
}

int main()
{
  char str1[] = "army";
  char str2[] = "mary";

  printf("String are anagrams %d\n", are_anagrams(str1, str2));

  return 0;
}