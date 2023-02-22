/*
 * File: 2-print_alphabet_x10.c
 * Auth: idoudi mokhtar
 */

#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
*/
void print_alphabet_x10(void)
{
int n, fo;

fo = 0;

while (fo < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
fo++;


_putchar('\n');
}
}
