/**********************************************
* File: 7-puts_half.c
* Auth: idoudi mokhtar
*/

#include "main.h"
#include <stdio.h>

/**
 * puts_half - print  half of a string, followed by a new line
 * @str: string
 * Return: always 0
 */


void puts_half(char *str)
{
int f = 0;
int n = 0;
while (str[f] != '\0')
{
f++;
}
n = f / 2;
if (f % 2 == 1)
n++;
while (str[n] != '\0')
{
putchar(str[n]);
n++;
}
putchar('\n');
}
