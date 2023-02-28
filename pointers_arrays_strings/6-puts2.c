/**********************************************
/*
* File: 6-puts2.c
* Auth: idoudi mokhtar
*/

#include <main.h>
#include <stdio.h>

/**
 * puts2 - print alternating chars of string
 * @str: string
 * Return: always 0
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if ((i % 2) == 0)
putchar(str[i]);
}
putchar('\n');
}
