#include <stdio.h>

/**
 * main - Prints a serie of numbers with commas
 *
 * Return: Always (Success);
 */
int main(void)
{
  int c = '0';

  while (c <= '9' )
    {


      putchar(c);
      if (c != '9')
	{
	  putchar(',');
	  putchar(' ');
	}

      c++;
    }


  putchar('\n');

  return (0);
}
