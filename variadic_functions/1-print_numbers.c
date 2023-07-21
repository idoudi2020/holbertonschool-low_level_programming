#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers -function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
  va_list args;
  unsigned int i, num = 0;

  va_start(args, n);
  for (i = 0; i < n; i++)
    {
      num = va_arg(args, int);
      printf("%d", num);
      if (separator && i <( n - 1))
	printf("%s", separator);
    }
  printf("\n");
  va_end(args);
}
