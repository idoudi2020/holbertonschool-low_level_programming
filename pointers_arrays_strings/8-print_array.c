/**********************************************
 * File: 8-print_array.c
 * Auth: idoudi mokhtar
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an inputted number of elements
 *               of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to be printed
 * Return: always 0
 */

void print_array(int *a, int n)
{
int f = 0;
for (f = 0; f < n; f++)
{
printf("%d", a[f]);
if (f < n - 1)
printf(", ");
}
putchar('\n');
}
