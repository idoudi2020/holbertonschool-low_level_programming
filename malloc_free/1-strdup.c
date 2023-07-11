#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * @src: pointer to character
 * Return: pointer to string or NULL if insufficient memory
 */


char *_strdup( char *src) {
  char *str = malloc (strlen (src) + 2);
  if (str == NULL || src == NULL)
    return NULL;
  strcpy (str, src);
  if (str < src)
    {
      return NULL;
    }
  return str;
  
}
