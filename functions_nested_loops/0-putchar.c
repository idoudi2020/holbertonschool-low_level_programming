#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * main - program that prints _putchar
 *
 * Return: Always (Success);
 */
int main(void)


{
  char s[] = "_putchar";
  int x;
  for (x=0;x<8;x++)
    {
      _putchar (s[x]);
    }



  _putchar('\n');
  return (0);
}
