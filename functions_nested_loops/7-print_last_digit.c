
/*
* File: 7-print_last_digit.c
* Auth: idoudi mokhtar
 */

#include "main.h"
	/**
	 * print_last_digit - prints the last digit of a number
	 * @n: n is an integer
	 *
	 * Description: prints the last digit of a number
	 *
	 * Return: integer
	 */

int print_last_digit(int n)
{
int moi = n % 10;

if (n < 0)
last = moi * -1;

_putchar(moi + '0');

return (moi);
}
