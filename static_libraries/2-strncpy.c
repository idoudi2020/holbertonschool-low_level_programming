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
  int i =0;

  while ( i < n && *src != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  for (; i < n; i++)
    {
      dest[i] = '\0';
    }
  return (dest);
}
