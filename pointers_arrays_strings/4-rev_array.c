#include <stdio.h>
#include "main.h"
/**
 * print_rev - function that prints the string in reverse
 * @s: variable
 * Return: 0
 */
void print_rev(char *s)
{
int h = 0;

while (s[h] != '\0')
{
h++;
}
h--;
while (h >= 0)
{
_putchar(s[h]);
h--;
}
_putchar('\n');
}
