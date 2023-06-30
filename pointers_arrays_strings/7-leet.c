#include "main.h"

/**
 * leet - 1337 encode
 * @s: string
 * Return: encoded to 1337
 */
char *leet(char *s)
{
  int i, j;
  char alp[] = "aeotl";
  char leet[] = "43071";

  for (i = 0; s[i] != '\0'; i++)
    {
      for (j = 0; alp[j] != '\0'; j++)
	{
	  if (s[i] == alp[j] || s[i] == alp[j] - 32)
	    s[i] = leet[j];
	}
    }
  return s;
}
