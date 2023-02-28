/**********************************************
* File: 7-puts_half.c
* Auth: idoudi mokhtar
*/

#include <main.h>
#include <studio.h>

/**
 * puts2 -  half of a string, followed by a new line
 * @str: string
 * Return: always 0
 */


void puts_half(char *str)
{
int f = 0;
int n = 0;
while (str[i] != '\0')
{
i++;
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
