#include "main.h"





char *_strcpy(char *dest, char *src)
{
  int i;

  for (i = 0; src[i] != '\0'; i++)
    {
      dest[i] = src[i];
    }
  dest[i] = '\0';
  return (dest);
}


char *_strncat(char *dest, char *src, int n)
{
  int j, i = 0;

  while (dest[i] != '\0')
    i++;
  for (j = 0; j < n && src[j] != '\0'; j++)
    dest[i + j] = src[j];
  return (dest);
}
