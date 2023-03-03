#include <stdio.h>
#include "main.h"
/**
 * _strncpy - Function that copies a string
 * @dest: variable
 * @src: variable
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int h;
h = 0;
while (src[h] != '\0' && h < n)
{
dest[h] = src[h];
i++;
}
while (h < n)
{
dest[h] = '\0';
h++;
}
return (dest);
}
