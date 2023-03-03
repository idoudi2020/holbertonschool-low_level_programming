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
for (h = 0; h < n && src[h] != '\0'; h++)
{
dest[h] = src[h];
}
for (h < n; h++)
dest[h] = '\0';
return (dest);
}
