#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * string_nconcat - function concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 * Return: pointer to the concatenated strings
 */

char* str_concat( char *s1,  char *s2)
{
  char *result;
  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";

  result = malloc(strlen(s1) + strlen(s2) + 1);
  if (result == NULL)
    return NULL;
   _strcpy (result, s1);
   _strcat (result, s2);
  return result;
}


