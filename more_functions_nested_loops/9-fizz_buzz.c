#include <stdio.h>

/**
 * main - print numbers, Fizz, and Buzz replacing some numbers.
 *
 * Return: 0
 */

int main(void)
{
int x;

for (x = 1; x <= 100; x++)
{
if (x % 3 == 0)
{
printf("Fizz");
}
if (x % 5 == 0)
{
printf("Buzz");
}
if (x % 3 != 0 && x % 5 != 0)
{
printf("%d", x);
}
if (x != 100)
{
printf(" ");
}
}
putchar('\n');
return (0);
}
