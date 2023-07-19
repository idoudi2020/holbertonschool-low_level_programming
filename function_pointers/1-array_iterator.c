#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter\
 on each element of an array
 * @array: a pointer to int array
 * @size: size of array
 * @action: pointer to the function to use
 * Return: Nothing(void)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
  unsigned int i;

  if (array && action)
    {
      for (i = 0; i < size; i++)
	{
	  action(array[i]);
	}
    }
}
