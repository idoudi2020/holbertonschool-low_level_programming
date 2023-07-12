#include "main.h"


char *_strcat(char *dest, char *src)
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

char *_strcpy(char *v, char *src)
{
  int i;

  for (i = 0; src[i] != '\0'; i++)
    {
      dest[i] = src[i];
    }
  dest[i] = '\0';
  return (dest);
}
