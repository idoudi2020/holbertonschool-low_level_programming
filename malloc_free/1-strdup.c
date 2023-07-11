#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *  * _strdup - a function that returns a pointer to a newly allocated space
 *   * @str: pointer to character
 *    * Return: pointer to string or NULL if insufficient memory
 *     */
char *_strdup(char *str)
{
	unsigned int len;
	char *arr;
	  if (str == NULL)
		      return NULL;

	   len = strlen(str);
	      arr = malloc(len + 1);
	        if (arr == NULL)
			    return NULL;

		  memcpy(arr, str, len + 1);

		    return arr;
}


