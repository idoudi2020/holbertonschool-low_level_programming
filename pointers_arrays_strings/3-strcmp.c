#include <stdio.h>
#include "main.h"
/**
 * _strcmp - Function that compares 2 strings character by character.
 * @s1: char 1
 * @s2: char 2
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
  int w = 0;
  int z;

while (s1[w] != '\0')
{
if (s1[w] > s2[w])
{
z = s1[w] - s2[w];
return (z);
}
else if (s1[w] < s2[w])
{
z = s1[w] - s2[w];
return (z);
}
w++;
}
return (0);
}
