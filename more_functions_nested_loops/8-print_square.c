#include <stdio.h>
#include "main.h"


/**
 * print_square - print square
 *
 * Return: void
 */

#include <stdio.h>
#include "main.h"

void print_square(int size)
{
  int ligne , colone;
  for(ligne =1 ; ligne <= size ;ligne++)
    {
      for(colone=1 ; colone <= size ;colone++)
	_putchar('#');
      _putchar('\n');

    }
}
