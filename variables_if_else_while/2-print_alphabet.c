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


  for (; c <= 'z'; )
    putchar(c++);
  //NUM++;
  for (; b<= 'Z';)
    putchar(b++);
  putchar('\n');

  return (0);
}
