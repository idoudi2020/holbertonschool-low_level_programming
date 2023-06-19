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


  for (;c <= 'z';)

    if (c != 'e' && c != 'q')
      putchar(c++);



  putchar('\n');



  return (0);
}
