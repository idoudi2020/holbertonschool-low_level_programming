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
  int i;

  for (i = 0; i < n && src[i] != '\0'; i++)
    {
      dest[i] = src[i];
    }
  for (; i < n; i++)
    {
      dest[i] = '\0';
    }
  return dest;
}
