#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: widht of array
 * @height: height of array
 * Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
  int **array;
  int i;
  if (width <= 0 || height <= 0)
    {
      return (NULL);
    }
  array = malloc(height * sizeof(int *));
  if (array == NULL)
    {

      return (NULL);
    }

  for(i = 0; i < height; i++)
    {
      array[i] = malloc(width * sizeof(int));
      if (array[i] == NULL)
	free (array[i]);


    }

  return (array);
}
