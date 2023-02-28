/**********************************************
 * File: 8-print_array.c
 * Auth: idoudi mokhtar
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers, followed by a new line
 * @str: string
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
