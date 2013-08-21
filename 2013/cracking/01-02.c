// Write code to reverse a C-Style String. (C-String means that "abcd" is represented as five characters, including the null character.)

#include <stdio.h>

char* reverse_string(char* str)
{
  char* c = str;
  char* end = str;

  while (*c != '\0')
  {
    end = c++;
  }

  c = str;

  while (c < end)
  {
    char tmp = *c;
    *c = *end;
    *end = tmp;
    c++;
    end--;
  }

  return str;
}

int main() 
{
  char input[] = "Test";
  printf("Reversed string %s \n", reverse_string(input));
  return 0;
}
