#include <stdio.h>
#include "main.h"


/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

#include <stdio.h>
#include "main.h"

void print_square(int size)
{
  int ligne ,colone;
  for(ligne =1 ; ligne <= size ;ligne++)
    {
      for(colone=1 ; colone <= size ;colone++)
	_putchar('#');
      _putchar('\n');

    }
}
