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

  if (s2 == NULL) s2 = "";


  if (n >= strlen(s2))
    n = strlen(s2);


  str = malloc(strlen(s1)+ n + 1);
  if (str == NULL)
    {
      return NULL;
    }
  _strcpy(str, s1);
  _strncat(str, s2, n);

  return str;
}
/**
 * _strcpy - copie string
 * @dest: string
 * @src: string
 * Return: string to stdout
 */
char *_strcpy(char *dest, char *src)
{
  int i;

  for (i = 0; src[i] != '\0'; i++)
    {
      dest[i] = src[i];
    }
  dest[i] = '\0';
  return (dest);
}

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: string
 * @n: int the max number of bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
  int j, i = 0;

  while (dest[i] != '\0')
    i++;
  for (j = 0; j < n && src[j] != '\0'; j++)
    dest[i + j] = src[j];
  return (dest);
}
