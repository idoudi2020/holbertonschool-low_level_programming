#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1 : string
 * @s2: string
 * Return: compared value
 */
int _strcmp(char *s1, char *s2)
{
  int i, j = 0;

  for (i = 0; (s1[i] != '\0') && (j == 0); i++)
    j = s1[i] - s2[i];
  return (j);
}
