#ifndef _VARIADIC_H_
#define _VARIADIC_H_

#include <stdarg.h>
#include <stdio.h>


/**
 * struct print - Struct print
 *
 * @type: type to print
 * @f: The function associated
 */

typedef struct print
{
  char type;
  void (*f)(va_list args);
} print_f;



int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);




#endif
