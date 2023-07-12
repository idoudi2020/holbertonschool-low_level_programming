#include <stdlib.h>
#include "main.h"
/**
 * array_range - array with countable inside
 * from min to max.
 *
 * @min: first item
 * @max: last item.
 * Return: ptr to array.
 **/
int* array_range(int min, int max) {
  int *array , x , i;
  if (min > max){ 
    return (NULL);
  }
  x = max - min + 1;
  array = malloc(x * sizeof(int) ) ;
   if (array == NULL) 
    return (NULL);

   for ( i = 0; i < x ; i++)
     { 
     array[i] = min + i;
                   }

    return (array);
}
  


