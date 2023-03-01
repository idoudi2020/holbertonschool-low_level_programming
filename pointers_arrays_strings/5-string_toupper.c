#include <stdio.h>
#include "main.h"
/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase
 * @s: variable with the string
 * Return: always 0
 */
char *string_toupper(char *s)
{
  int x = 0;

  while (s[x] != '\0')
    {
      if (s[x] >= 'a' && s[x] <= 'z')
	{
	  s[x] = s[x] - 32;
	}
      x++;
    }
  return (s);
}
