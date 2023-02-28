/*
* File: 4-print_rev.c
* Auth: idoudi mokhtar
*/
#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that prints the string in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
i--;
while (i >= 0)
{
putchar(s[i]);
i--;
}
putchar('\n');
}
