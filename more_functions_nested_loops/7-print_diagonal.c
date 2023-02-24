#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times
 * Return: 0
 */

void print_diagonal(int n)
{
int o = 0;
int p = 0;

for (o = 0; o < n; o++)
{
if (n > 1)
{
for (p = 0; p < o; p++)
{
_putchar (32);
}
_putchar (92);
_putchar ('\n');
}
}
if (n <= 0)
{
_putchar ('\n');
}
}
