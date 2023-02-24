#include "main.h"

/**
 * print_triangle - print the triangle
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
int x, y, z;

if (size > 0)
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
z = (size - x) - 1;
if (y < z)
_putchar (32);
else
_putchar (35);
}
_putchar('\n');
}
else
{
_putchar ('\n');
}
}
