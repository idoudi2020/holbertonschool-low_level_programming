#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print n to 98 counts
 * Return: void
 * @n: input
 */


void print_to_98(int n)
{

  int compt;
  if (n>98)
    for(compt=n ;compt>98;compt--)
      printf ("%d, ",compt);
  else /*n<98*/
    for(compt=n ;compt<98;compt++)
      printf ("%d, ",compt);

  printf("98\n");
}
