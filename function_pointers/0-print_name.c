#include "function_pointers.h"

/**
 * print_name - function print a name with given function
 * @name: name to print
 * @f: pointer to func that take a char as param
 * Return: void
 *
 */

void print_name(char *name, void (*f)(char *))
{
  if (name && f)
    f(name);
}
