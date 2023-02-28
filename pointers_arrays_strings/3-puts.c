/*
 * File: 3-puts.c
 * Auth: idoudi mokhtar
 */

#include "main.h"

/**
 * _puts - prints the string.
 * @str: variable.
 * Return: Always 0
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
