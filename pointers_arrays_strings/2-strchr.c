#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: Returns a pointer to the first occurrence
 */
char *_strncpy(char *dest, char *src, int n)
{
int h;
for (h=0; h < n  &&  src[h] != '\0';  h++ )
{
dest[h] = src[h];
}
for (;h < n; h++)
{
dest[h] =  '\0' ;
}
return (dest);
}
