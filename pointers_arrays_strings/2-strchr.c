#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
int h;
h = 0;
while (src[h] != '\0' && h < n)
{
dest[h] = src[h];
h++;
}
while (h < n)
{
dest[h] = '\0';
h++;
}
return (dest);
}
