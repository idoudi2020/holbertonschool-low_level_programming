#include "main.h"

/**
 * print_triangle - print triangle
 * @size: int
 * Return: triangle
 */

void print_triangle(int size)
{
  int a, b;

  if (x <= 0)
    {
      putchar('\n');
    }
  else
    {

      for (a = 0; a < x; a++)
	{
	  for (b = 0; b < x - a - 1; b++)
	    _putchar(' ');
	  for (b = 0; b <= a; b++)
	    _putchar('#');
	  _putchar('\n');

	}
    }
}
