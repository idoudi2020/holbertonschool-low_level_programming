#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print n to 98 counts
 * Return: void
 * @n: input
 */


void print_to_98(int n)
{


  if (n>98)
    for(;n>98;n--)
      printf ("%d, ",n);
  else /*n<98*/
    for(;n<98;n++)
      printf ("%d, ",n);

  printf("98\n");
}
