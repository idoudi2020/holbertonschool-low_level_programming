#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that multiplies two numbers.
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
int result;
if (argc == 3)
{
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
}
else
{
puts("Error");
}
return (0);
}
