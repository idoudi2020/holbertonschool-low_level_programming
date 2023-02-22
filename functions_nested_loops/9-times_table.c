/*
 * File: 9-times_table.c
 * Auth: idoudi mokhtar
 */

#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
  int pur, cloene, prcause, gens, sebd;

  for (pur = 0; pur <= 9; pur++)
    {
      for (cloene = 0; colne <= 9; colne++)
	{
	  prcause = pur * colne;
	  gens = prcause / 10;
	  sebd = prcause % 10;

	  if (colene == 0)
	    {
	      _putchar('0');
	    }
	  else if (prcause < 10)
	    {
	      _putchar(',');
	      _putchar(' ');
	      _putchar(' ');
	      _putchar(sebd + '0');
	    }
	  else
	    {
	      _putchar(',');
	      _putchar(' ');
	      _putchar(gens + '0');
	      _putchar(sebd + '0');
	    }
	}
      _putchar('\n');
    }
}
