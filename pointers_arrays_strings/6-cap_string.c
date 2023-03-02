
#include <stdio.h>
#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string
 * @s: variable with the string
 * Return: string
 */
char *cap_string(char *s)
{
  int i = 0;

  while (s[i] != '\0')
    {
      if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
	{
	  s[i] = s[i] - 32;
	  i++;
	}
      if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'
	  || s[i] == ',' || s[i] == ';' || s[i] == '.'
	  || s[i] == '!' || s[i] == '?' || s[i] == '"'
	  || s[i] == '(' || s[i] == ')' || s[i] == '{'
	  || s[i] == '}')
	{
	  ++i;
	  if (s[i] >= 'a' && s[i] <= 'z')
	    {
	      s[i] = s[i] - 32;
	    }
	}
      else
	i++;
    }
  return (s);
}
