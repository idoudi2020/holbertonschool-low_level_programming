/*
 * File: 5-sign.c
 * Auth: idoudi mokhtar
 */

#include "main.h"
/**
 * print_sign - Prints the sign of a number.
 * @n: The number of which the sign will be printed.
 *
 *Returns 1 and prints + if n is greater than zero
 *Returns 0 and prints 0 if n is zero
 *Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
    }
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
