#include <stdio.h>
#include "main.h"
/**
* help - decide if it's a prime number
* @i: variable
* @n: variable
* Return: nothing
*/
int help(int i, int n)
{
if (n % i == 0)
return (0);
if (n % i != 0 && i < n)
return (1);
return (help(i + 1, n));
}
/**
* is_prime_number - check the prime number
* @n: variable
* Return: nothing
*/
int is_prime_number(int n)
{
int i = 2;

if (n < 2)
return (0);
return (help(i, n));
}
