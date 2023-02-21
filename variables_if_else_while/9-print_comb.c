/*
 * File: 9-print_comb.c
 * Auth: idoudi mokhtar
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int num;

for (num = 9; num >= 0; num--)
{
putchar((num % 10) + '0');
if (num == 0)
continue;

putchar(',');
putchar(' ');
}

putchar('\n');
return (0);
}
