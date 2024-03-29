#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated strings
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
  strcpy(result, s1);
  strcat(result, s2);
  return result;
}
