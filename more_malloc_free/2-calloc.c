#include "main.h"
#include <stdlib.h>

/**
 *_calloc - function
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: ptr to array.
 **/
void*_calloc(unsigned int nmemb, unsigned int size)
{

 unsigned int x;
  char *ptr;
  if (nmemb == 0 || size == 0)
    return (0);
  ptr = malloc(nmemb * size);
  if (ptr == 0)
    return (0);
  for (x = 0; x < (nmemb * size); x++)
    
    ptr [x] =  0;
  return (ptr);
}
