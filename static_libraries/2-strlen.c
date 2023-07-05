#include "main.h"

/**
 * _strlen - count lenght
 * @s : string
 * Return: lenght
 */
int _strlen(char *s)
{
  int a;
  for (a =0; *s != '\0';s++)
    a++;
  return (a);
}
