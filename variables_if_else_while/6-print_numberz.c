#include <stdio.h>

/**
 * main - Prints the numbers since 0 to 9
 *
 * Return: Always (Success)
 */
int main(void)
{
  int  n = '0';

  while (n <= '9')
    {
      putchar(n++);
    }

  putchar('\n');

  return (0);
}
