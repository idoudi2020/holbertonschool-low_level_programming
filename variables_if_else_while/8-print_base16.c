#include <stdio.h>

/**
 * main - Prints a hexadecimal string
 *
 * Return: Always (Success)
 */
int main(void)
{
  char c= '0';
  char b= 'a';

  while( c <= '9')
    {
      putchar(c++);
    }

  while(b <= 'f')
    {
      putchar(b++);
    }

  putchar('\n');

  return (0);
}
