#include <stdio.h>
#include "main.h"
/**
 * _strcat - Function to concatenate strings
 * @dest: string 1
 * @src: string 2
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
  int t;
  int h;

  for (t = 0; dest[t] != '\0'; t++)
    {
    }
  for (h = 0; src[h] != '\0'; h++)
    {
      dest[t] = src[h];
      t++;
}
return (dest);
}
