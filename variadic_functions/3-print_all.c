#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_char - print char
 * @args: of type char
 *
 */
void print_char(va_list args)
{
  printf("%c", va_arg(args, int));
  return;
}

/**
 * print_integer - print integer
 * @args: of int type
 *
 */
void print_integer(va_list args)
{
  printf("%d", va_arg(args, int));
  return;
}

/**
 * print_float - print float
 * @args: of type float
 *
 */
void print_float(va_list args)
{
  printf("%f", va_arg(args, double));
}

/**
 * print_string - print string
 * @args: string type
 *
 */
void print_string(va_list args)
{
  char *s;
  s = va_arg(args, char *);

  printf("%s", !s ? "(nil)" : s);
}

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: no return
 *
 */
void print_all(const char * const format, ...)
{
  va_list args;
  unsigned int start = 0, i = 0, j;
  char *sep = ", ";

  print_f formats[] = {
		       {'c', print_char},
		       {'i', print_integer},
		       {'f', print_float},
		       {'s', print_string},
		       {0, NULL}
  };

  va_start(args, format);

  while (format && format[i])
    {
      j = 0;
      while (formats[j].type)
	{
	  if (format[i] == formats[j].type)
	    {
	      if (start)
		printf("%s", sep);
	      start = 1;
	      formats[j].f(args);
	      break;
	    }
	  j++;
	}
      i++;
    }
  va_end(args);
  printf("\n");
}
