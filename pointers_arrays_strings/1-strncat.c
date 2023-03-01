#include <stdio.h>
#include "main.h"
/**
 * _strncat - Function to concatenate strings
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
  int by;
  int yb;

  for (by = 0; dest[by] != '\0'; by++)
    {
    }
  for (yb = 0; yb < n && src[yb] != '\0'; yb++)
    {
      dest[by] = src[yb];
      by++;
    }
  return (dest);
}
