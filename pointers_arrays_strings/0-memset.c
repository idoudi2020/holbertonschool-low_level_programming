#include "main.h"

/**
 * _memset - fill memory with cons byte
 * @s: pointer to the memory
 * @b: cons bytes to fill with
 * @n : number of bytes to fill
 * Return: memory filled by cons
 */
char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;

  for (i = 0; i < n; i++)
    s[i] = b;
  return (s);
}
