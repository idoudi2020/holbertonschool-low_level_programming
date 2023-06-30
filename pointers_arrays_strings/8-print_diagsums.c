#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer thar point array of int
 * @size: int
 * Return: sum of diagonals
 */

void print_diagsums(int *a, int size)
{
  int i, sl = 0, sr = 0;

  for (i = 0; i < size ; i++)
    {
      sl += *(a + i * size + i);
      sr += a[i * size + (size - i - 1)];
    }
  printf("%i, %i\n", sl, sr);
}
