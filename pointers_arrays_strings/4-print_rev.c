#include "main.h"


/**
 * print_rev - print in reverse
 * @s: stirng
 * Return: print string in reverse to stdout
 */
void print_rev(char *s)
{
  int x = 0;

  while(s[x] != '\0')
    x++;
  {
    while (x--)
      _putchar(s[x]);
  }
  _putchar('\n');
}
