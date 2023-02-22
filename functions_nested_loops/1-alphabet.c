/*
 * File: 1-alphabet.c
 * Auth: idoudi mokhtar
 */

#include "main.h"

/**
* print_alphabet - prints the alphabet in lowercase, followed by a new line.
*
*Return: Always 0 (Succes)
*/
void print_alphabet(void)
{

int n;
for (n = 'a'; n <= 'z';n++)
{
_putchar(n);
}
_putchar('\n');
}
