#include "main.h"


/**
 * _strchr - funtion that localtes char in str
 * @s: pointer
 * @c: char to localte
 * Return: point to the first occur of c in s , or null
 */

char *_strchr(char *s, char c)

{
  int i;

  for (i = 0 ; s[i] != '\0'; i++)
    {
      if (s[i] == c)
	{
	  return (s + i);
	}
    }
  if (s[i] == c)
    {
      return (s + i);
    }
  else
    {
      return (0);
    }
}
