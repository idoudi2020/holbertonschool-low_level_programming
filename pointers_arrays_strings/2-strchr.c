#include <stdio.h>
#include "main.h"
/**
 * _strchr - Function that locates a character in a string.
 * @s: array
 * @c: character to locate
 * Return: \0
 */
char *_strchr(char *s, char c)
{
unsigned int h = 0;

for (; ; h++)
{
if (s[h] == c)
return (&(s[h]));
if (!s[h])
return ('\0');
}
}
