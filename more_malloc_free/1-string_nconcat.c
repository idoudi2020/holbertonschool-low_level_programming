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

char *string_nconcat(char *s1, char *s2, unsigned int n) {

  char *str;

  if (s1 == NULL) s1 = "";

  if (s2 == NULL)  s2 = "";


  if (n >= strlen(s2))
    n = strlen(s2);


  str = malloc(strlen(s1)+ n + 1);
  if (str == NULL)
    {
      return NULL;
    }
  _strcpy(str, s1);
 _strcat(str, s2, n);

  return str;
}
