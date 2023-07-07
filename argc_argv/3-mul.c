#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two argu numb
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
  int sum;

  if (argc == 3)
    {
      sum = atoi(argv[1]) * atoi(argv[2]);
      printf("%d\n", sum);
      return (0);
    }
  else
    printf("Error\n");
  return (1);
}
