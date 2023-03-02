#include <stdio.h>
#include "main.h"
/**
 * reverse_array - Function that reverse an array
 * @a: array
 * @n: bytes
 * Return:always 0
 */
void reverse_array(int *a, int n)
{
  int h;
  int w;
  int temp[1000];

  w = 0;
  while (x < n)
    {
      temp[w] = a[w];
      w++;
    }
  h = 0;
  while (h < n)
    {
      a[h] = temp[w - 1];
      w--;
      h++;
    }
}
