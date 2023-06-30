#include "main.h"

/**
 * _memcpy - copie memory area from src to dest
 * @dest: pointer to the memory
 * @src: pointer to source mem area
 * @n : unsigned int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
  unsigned int i;

  for (i = 0; i < n; i++)
dest[i] = src[i];
  return dest;
}
