#include <stdio.h>
#include "main.h"

void more_numbers(void)
{
  char s[] = "01234567891011121314";
  int x, y;

  for (x=0;x<=9;x++)

    {
      y=0;
      while (y<20)
	_putchar(s[y++]);
      _putchar('\n');

    }


}
/*******************************
har s[] = "01234567891011121314";
  int x, y;
  
         for (x=0;x<=9;x++)      
         {
           for (y=0;y<20;y++)
              putchar(s[y]);
               putchar('\n');
           
         }
**********************/
