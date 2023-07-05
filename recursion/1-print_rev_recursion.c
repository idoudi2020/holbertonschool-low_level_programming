#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: pointer to string
 * Return: string
 */

void _print_rev_recursion(char *s)

{
  if (s[0] >'\0')
    {

      _print_rev_recursion(s + 1);
      _putchar(s[0]);

    }

}
