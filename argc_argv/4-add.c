#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Program that add positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
long int sum;
int i, j;
sum = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!(isdigit(argv[i][j])))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
}
printf("%ld\n", sum);
return (0);
}
