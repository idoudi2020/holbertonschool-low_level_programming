#include "main.h"

/**
 * print_square - print square
 * @size: int
 * Return: Square
 */
void print_square(int size)
{

  int ligne , colone;
  if (size > 0)
    for (a = 0; ligne < size; a++)
      {
	for (b = 0; colone < size; b++)
	  _putchar('#');
	_putchar('\n');
      }
  else
    _putchar('\n');
}
