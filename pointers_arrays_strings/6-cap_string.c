
#include <stdio.h>
#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string
 * @s: variable with the string
 * Return: string
 */
char *cap_string(char *s)

{
  int h, k;

  char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		  '!', '?', '"', '(', ')', '{', '}'};

  for (h = 0; s[h] != '\0'; h++)
    {
      if (h == 0 && s[h] >= 'a' && s[h] <= 'z')
	s[h] = 32;

      for (k = 0; k < 13; k++)
	{
	  if (s[h] == spe[k])
	    {
	      if (s[h + 1] >= 'a' && s[h + 1] <= 'z')
		{
		  s[h + 1] = 32;
		}
	    }
	}
    }

  return (s);
}
