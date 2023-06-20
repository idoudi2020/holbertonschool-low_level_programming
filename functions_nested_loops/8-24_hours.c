#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 *jack_bauer - prints every minute of the day
 *
 *Return: no return
 */

void jack_bauer(void)
{
  int h=0,min=0;
  for ( ;h<= 23;h++)
    {

      for(;min<=59;min++)
	{
	  _putchar(h / 10 + '0');
	  _putchar(h % 10 + '0');
	  _putchar(':');
	  _putchar(min / 10 + '0');
	  _putchar(min % 10 + '0');
	  _putchar('\n');

	}

    }

}
