#include "main.h"

/**
 * print_triangle - print triangle
 * @size: int
 * Return: triangle
 */

void print_triangle(int size)
{
  int size, b;

  if (x <= 0)
    {
      putchar('\n');
    }
  else
    {

      for (a = 0; a < size; a++)
	{
	  for (b = 0; b < size - a - 1; b++)
	    _putchar(' ');
	  for (b = 0; b <= a; b++)
	    _putchar('#');
	  _putchar('\n');

	}
    }
}
