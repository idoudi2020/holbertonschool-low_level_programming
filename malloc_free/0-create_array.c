#include "main.h"
#include <stdlib.h>
/**
 * *create_array -  a function that creates an array of chars
 * @size: size of  array
 * @c: character 
 * Return: pointer to array 
 */
char *create_array(unsigned int size, char c)
{
  unsigned int i=0;
  char *array = (char *) malloc(size); // means: char *array = (char*) malloc(size * sizeof(char));

  if (size == 0 || array == NULL)
    {
      return (0);
    }

  while (i < size)
    {
      array[i++] = c;
    }
  return (array);
}
