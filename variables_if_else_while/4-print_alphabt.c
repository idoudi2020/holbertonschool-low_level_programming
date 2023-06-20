#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: 0
 **/

int main(void)
{
  char c = 'a';

  do
    {
      if (c == 'e' || c == 'q')
	c++ ;
      putchar(c++);
     
    }while (c <= 'z');

  putchar('\n');

  return (0);
}
/*********************************************
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
*
* Return: 0
**/
/****************************
int main(void)
{


  for (char c = 'a'; c <= 'z';c++)
    {
      if (c == 'e' || c == 'q')
	{
	  continue;
	  //continue it's same c++ that mean skip e and q
	}


      putchar(c);

    }

  putchar('\n');

  return (0);
}
*******************************************/
