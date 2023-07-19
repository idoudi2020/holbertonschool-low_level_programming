#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - function that selects the correct function to perform\
 the operation asked by the user
 * @s: is operator passed as argument to the program
 * Return: pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
  int i = 0;

  op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
  };
  while (ops[i].op != NULL)
    {
      if (*s == *ops[i].op && *(s + 1) == '\0')
	return (ops[i].f);
      i++;
    }
  return (NULL);
}
