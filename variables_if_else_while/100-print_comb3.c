#include <stdio.h>

/**
 * main - Prints a serie of numbers with commas
 *
 * Return:0  if  (Success);
 */
int main(void)
{
  int c = '0' , b;

  while (c <= '9')
    {
      b = 0;
      while (b <= '9')
	{
	  if(c != b && c<b)
	    {
	      putchar(c);
	      putchar(b);
	      if (c != '8' || (c == '8' && b != '9'))
		{
		  putchar(',');
		  putchar(' ');
		}

	    }
	  b++;

	}



      c++;
    }


  putchar('\n');

  return (0);
}
