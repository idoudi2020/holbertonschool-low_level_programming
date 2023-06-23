#include "main.h"

/**
 * print_line - print line function
 * @n: int
 * Return: Line
 */

void print_line(int n)
{
  int x;

  for (x = 0; x < n; x++)
    _putchar('_');
  _putchar('\n');
}
