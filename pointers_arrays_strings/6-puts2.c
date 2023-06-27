#include "main.h"
/**
 * puts2 - puts even line
 * @str: string
 * Retun: even line
 */




void puts2(char *str)
{
  int x;
  for (x=0;str[x]!='\0';x++)
    if(x % 2 == 0)
      _putchar (str[x]);
  _putchar('\n');
}
