#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @c: char
 * Return: char
 */

char *cap_string(char *c)
{
  int i = 0, j;
  char check[] = " \t\n,;.!?\"(){}";

  if (c[i] >= 97 && c[i] <= 122)
    c[i] -= 32;
  while (c[i] != '\0')
    {
      i++;
      for  (j = 0; check[j] != '\0'; j++)
	{
	  if (c[i] == check[j])
	    {
	      if (c[i + 1] >= 97 && c[i + 1] <= 122)
		c[i + 1] -= 32;
	    }
	}
    }
  return (c);
}
