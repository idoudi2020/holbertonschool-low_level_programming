#include <stdio.h>
#include "main.h"

/**
 * main - program that prints _putchar
 *
 * Return: Always (Success);
 */
int main(void)


{
  char s[]="_putchar";
  char x=0;
  for (;x<8;x++)
    {
      _putchar (s[x]);
    }



  _putchar('\n');
  return 0;
}
