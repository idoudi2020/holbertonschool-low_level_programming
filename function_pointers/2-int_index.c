#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to int array
 * @size: the number of element in array
 * @cmp: a pointer to function
 * Return: the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
  int i;

  if (!array || !cmp || size <= 0)
    return (-1);
  for (i = 0; i < size; i++)
    {
      if (cmp(array[i]))
	return (i);
    }
  return (-1);
}
