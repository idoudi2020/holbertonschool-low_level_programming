#include "main.h"

  /**
   * string - count lenght
   * @s : string
   * Return: len
   */
int _strlen(char *s)
{
  int a;
  for (a =0; *s != '\0';s++)
    a++;
  return (a);
}
