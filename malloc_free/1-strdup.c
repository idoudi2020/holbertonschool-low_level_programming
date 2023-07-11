#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *  _strdup - a function that returns a pointer to a newly allocated space
 * @str: pointer to character
 *  Return: pointer to string or NULL if insufficient memory
 **/
char *_strdup(char *str)
{
      
  char *arr;
	if (str == NULL)
	  return (NULL);

	arr = malloc(strlen(str) + 1);

	if (arr == NULL)
		return (NULL);
	strcpy (arr, str);
	return (arr);
}
