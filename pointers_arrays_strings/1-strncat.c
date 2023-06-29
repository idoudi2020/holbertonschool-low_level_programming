#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: string
 * @n: int the max number of bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
  int j, i = 0;

  while (dest[i] != '\0')
    i++;
  for (j = 0; j < n && src[j] != '\0'; j++)
    dest[i + j] = src[j];
  return (dest);
}
