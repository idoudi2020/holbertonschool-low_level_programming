#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * @str: pointer to character
 * Return: pointer to string or NULL if insufficient memory
 */

char *_strdup( char *str) {
  size_t len;
char *src;
  len = strlen(str + 1);
  if (str == NULL)
	  return NULL;
  src = malloc(len + 2);
  if ( src == NULL)
    return NULL;
  memcpy(src, str, len + 1);
  return src;
}

