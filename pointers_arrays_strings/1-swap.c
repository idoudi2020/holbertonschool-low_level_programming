#include "main.h"

/**
 * swap_int - swap 2 int
 * @a : var (n) of int type
 * @b: var(n) of int type
 */

void swap_int(int *a, int *b)
{
  int swap = *a;
  *a = *b;
  *b = swap;
}
