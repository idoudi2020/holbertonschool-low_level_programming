#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * @src: pointer to character
 * Return: pointer to string or NULL if insufficient memory
 */


char *_strdup( char *src) {
  char *str = malloc(strlen (src) + 1);
  if (str == NULL)
  return NULL;
  strcpy(str, src);
  return str;
}
