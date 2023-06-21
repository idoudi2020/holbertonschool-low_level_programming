#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print n to 98 counts
 * Return: void
 * @n: input
 */


void print_to_98(int n)
{

  int c;
  if (n>98)
    for(c=n ;c>98;c--)
      printf ("%d, ",c);
  else //n98
    for(c=n ;c<98;c++)
      printf ("%d, ",c);

  printf("98\n");
}
