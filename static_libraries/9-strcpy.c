#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strcpy - function that copy the string
* @dest: A buffer to copy the string to.
* @src: The source string to copy.
* Return: always 0.
*/


char *_strcpy(char *dest, char *src)
{
size_t len = strlen(src);
strncpy(dest, src, len + 1);
return (dest);
}
