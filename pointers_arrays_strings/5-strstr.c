#include <stdio.h>
#include "main.h"
/**
 * _strstr - Function that locates a substring
 * @haystack: string to search
 * @needle: substring to search
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int j = 0;

while (needle[j] != '\0')
j++;

while (*haystack)
{
for (i = 0; needle[i]; i++)
{
if (haystack[i] != needle[i])
break;
}
if (i != j)
haystack++;
else
return (haystack);
}
return ('\0');
}
