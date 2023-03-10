#include <stdio.h>
/**
* main - Program that prints the number of arguments passed into it.
* @argc: argument counter
* @argv: argument vector
* Return: 0
*/
int main(int argc, char *argv[])
{
if (argc > 0)
{
argv = argv;
printf("%d\n", argc - 1);
}
return (0);
}
