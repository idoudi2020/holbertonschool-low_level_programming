#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that performs simple operations
 * @argc: The number of command line arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
  int num1, num2, result = 0;
  int (*operator)(int, int);

  if (argc != 4)
    {
      printf("Error\n");
      exit(98);
    }
  num1 = atoi(argv[1]);
  num2 = atoi(argv[3]);
  operator = get_op_func(argv[2]);
  if (operator == NULL)
    {
      printf("Error\n");
      exit(99);
    }
  if ((operator == op_div || operator == op_mod) && num2 == 0)
    {
      printf("Error\n");
      exit(100);
    }
  result = operator(num1, num2);
  printf("%d\n", result);
  return (0);
}
