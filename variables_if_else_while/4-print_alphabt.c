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
