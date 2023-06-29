#include "main.h"
/**
 * _strncpy - function  copies the string
 * @dest: pointer type character
 * @src: pointer type character
 * @n: input intger
 * Return: pointer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
  int i = 0;

  while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }

  while (i < n)
    {
      dest[i] = '\0';
      ++i;
    }

  return dest;
}
