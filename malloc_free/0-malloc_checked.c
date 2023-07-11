#include "main.h"


/**
 * malloc_checked - function that allocates memory using malloc and exit if failed
 * @b: int
 * Return:pointer to the array allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
 
  int *ptr= malloc(b * sizeof(unsigned int));

  if (ptr == NULL)
    {
      exit(98);
    }
  return (ptr);
}
