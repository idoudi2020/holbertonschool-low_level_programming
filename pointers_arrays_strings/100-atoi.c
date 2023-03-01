#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert
 * Return: the converted string.
 */
int _atoi(char *s)
{
  int doto;
  unsigned int lot;
  char *nour;
  temp = s;
  lot = 0;
  doto = 1;
  while (*nour != '\0' && (*nour < '0' || *nour > '9'))
    {
      if (*nour == '-')
	doto *= -1;
      nour++;
    }
  if (*nour != '\0')
    {
      do {
	lot = lot * 10 + (*nour - '0');
	nour++;
      } while (*nour >= '0' && *nour <= '9');
    }
  return (lot * doto);
}
