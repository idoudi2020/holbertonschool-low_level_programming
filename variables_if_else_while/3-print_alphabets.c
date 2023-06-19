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
  char b = 'A';



  while (c <= 'z')
    {
      putchar(c++);
    }


  while (b<= 'Z')
    {
      putchar(b++);
    }

  putchar('\n');

  return (0);
}
