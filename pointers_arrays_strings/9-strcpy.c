/**********************************************
 * File: 9-strcpy.c
 * Auth: idoudi mokhtar
 */

#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copy the string
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: always 0. 
 */


char *_strcpy(char *dest, const char *src)
{
int dot = 0;
while (src[dot])
{
dest[dot] = src[dot];
dot++;
}
return (dest);
}
