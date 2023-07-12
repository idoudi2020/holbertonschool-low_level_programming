#include "main.h"


char *function_file(char *dest, char *src);
{
  char *ptr = dest;

  while (*ptr != '\0')
    ptr++;
  while (*src != '\0')
    {
      *ptr = *src;
      ptr++;
      src++;
    }
  *ptr = '\0';
  return (dest);
}

char *function_file(char *dest, char *src);
{
  int i;

  for (i = 0; src[i] != '\0'; i++)
    {
      dest[i] = src[i];
    }
  dest[i] = '\0';
  return (dest);
}
