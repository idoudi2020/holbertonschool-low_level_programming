#include <stdio.h>
#include "main.h"
/**
 * print_rev - function that prints the string in reverse
 * @s: variable
 * Return: always 0
 */
void print_rev(char *s)
{
  int x = 0;

  while (s[x] != '\0')
    {
      x++;
    }
  x--;
  while (x >= 0)
    {
      putchar(s[x]);
      x--;
    }
  putchar('\n');
}
