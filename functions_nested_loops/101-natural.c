#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always 0
 */


int main (void)
{

  int a,b;
  for(a=0 ;a<1024;a++)
    {

      if ((a% 3 == 0) || (a% 5 == 0))
	b +=a; /* b +=a Signified  b = b+a*/
    }
  printf ("%d\n",b);
  return (0);

}
