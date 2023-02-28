/*
 * File: 3-puts.c
 * Auth: idoudi mokhtar
 */

#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 * Return: Always 0
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
