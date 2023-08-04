#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to\
 *flip to get from one number to another
 * @n: first int
 * @m: second int
 * Return: the number of bits
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  unsigned long int XOR;
  unsigned int count = 0, i = 0;

  XOR = n ^ m;
  for (; i < sizeof(unsigned long int) * 8; i++)
    {
      if ((XOR >> i) & 1)
	count++;
    }
  return (count);
}
