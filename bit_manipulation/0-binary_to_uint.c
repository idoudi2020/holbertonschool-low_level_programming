#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to\
 *an unsigned int
 * @b: pointer to string containing binary number
 * Return: the converted number, or 0 if
 *
 */

unsigned int binary_to_uint(const char *b)
{
  unsigned int result = 0;
  const char *c;

  if (!b)
    {
      return (0);
    }

  c = b;
  while (*c)
    {
      if (*c == '0' || *c == '1')
	{
	  result = result << 1 | (*c - '0');
	}
      else
	{
	  return (0);
	}
      c++;
    }
  return (result);
}
