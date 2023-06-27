#include "main.h"

  /**
   *_strlen - founction returns the length of a string
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
