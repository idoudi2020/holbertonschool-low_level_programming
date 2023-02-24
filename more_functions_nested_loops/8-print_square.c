#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the squares
 * Return: 0
 */

void print_square(int size)
{
int i;
int y;
for (i = 0; i < size; i++)
{
for (y = 0; y < size; y++)
{
_putchar (35);
}
_putchar ('\n');
}
if (size <= 0)
{
_putchar ('\n');
}
}
