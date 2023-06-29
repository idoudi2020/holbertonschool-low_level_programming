#include "main.h"


/**
 * print_square - print square
 *
 * Return: void
 */


void print_square(int size)
{
  int ligne , colone;
  if (size>0)
  for(ligne =0 ; ligne <= size ;ligne++)
    {
      for(colone=0 ; colone <= size ;colone++)
	_putchar('#');
      _putchar('\n');

    }
  else
    _putchar('\n');
}
