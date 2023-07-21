#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parama
 * Return: returns the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
  va_list args;
  va_start(args, n);
  int sum = 0 ;
  int i;
  if (n == 0)
    {
      return (0);
    }

  for (i = 0; i < n; i++)
    {
      sum +=va_arg(args, int);
    }
  va_end(args);
  return (sum);
}
