*
* File: 5-more_numbers.c
* Auth: idoudi mokhtar
 */



#include "main.h"

	/**
	 * more_numbers - prints numbers 0-14 ten times
	 *
	 * Return: void
	 */

void more_numbers(void)
{
  int line, i, repeat, limit;

  i = '0';
  repeat = 0;
  limit = '9';

  for (line = 0; line < 10; line++)
    {
      while (repeat < 2)
	{
	  while (i <= limit)
	    {
	      if (limit == '4')
		_putchar('1');
	      _putchar(n);
	      i++;
	    }
	  repeat++;
	  limit = '4';
	  i = '0';
	}
      _putchar('\n');
      repeat = 0;
      i = '0';
      limit = '9';
    }
}
