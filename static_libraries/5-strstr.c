#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: char to check
 * @needle: strings
 * Return: strings located
 */

char *_strstr(char *haystack, char *needle)
{
  size_t l1 = strlen(haystack);
  size_t l2 = strlen(needle);
  size_t i, j;

  if (!needle)
    return (NULL);
  for (i = 0; i <= l1 - l2; i++)
    {
      for (j = 0; j < l2; j++)
	if (haystack[i + j] != needle[j])
	  break;
      if (j == l2)
	return (haystack + i);
    }
  return (NULL);
}
