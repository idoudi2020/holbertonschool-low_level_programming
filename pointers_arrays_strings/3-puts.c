#include "main.h"

/**
 * _puts - puts function
 * @str :  string
 * Return: str to stdout
 */

void _puts(char *str)
{
  int x;
  for (x= 0;str[x] != '\0';x++)
    {
      _putchar(str[x]);

    }
  _putchar('\n');
}
