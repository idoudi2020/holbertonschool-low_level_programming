#include <stdio.h>
/**
* _puts_recursion - recursion
* @s: variable
*/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
putchar(*s);
_puts_recursion(++s);
}
else
{
putchar('\n');
}
}
