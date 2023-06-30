#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints the chessboard
 * @a: array of string
 * Return: single character of array
 */

void print_chessboard(char (*a)[8])
{
  size_t i, j;

  for (i = 0; i < 8; i++)
    {
      for (j = 0; j < 8; j++)
	{
	  printf("%c", a[i][j]);
	}
      printf("\n");
    }
}
