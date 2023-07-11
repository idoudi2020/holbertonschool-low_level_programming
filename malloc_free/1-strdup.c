#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * @src: pointer to character
 * Return: pointer to string or NULL if insufficient memory
 */


char *_strdup( char *str) {
  char *src = malloc (strlen (str) + 1);
  if (str == NULL || src == NULL)
    return NULL;
  strcpy (src, str);
  return src;
}
