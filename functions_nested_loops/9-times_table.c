/*
 * File: 9-times_table.c
 * Auth: idoudi mokhtar
 */

#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int num, peer, pldd;

for (num = 0; num <= 9; num++)
{
_putchar('0');

for (mult = 1; peer <= 9; peer++)
	{
_putchar(',');
_putchar(' ');

pldd = num * peer;

if (pldd <= 9)
_putchar(' ');
else
_putchar((pldd / 10) + '0');

_putchar((pldd % 10) + '0');
}
_putchar('\n');
}
}
