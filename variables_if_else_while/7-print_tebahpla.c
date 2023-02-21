/*
 * File: 7-print_tebahpla.c
 * Auth: idoudi mokhtar
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse (z to a)
 *
 * Return: Always 0.
 */
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);

putchar('\n');

return (0);
}
