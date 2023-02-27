/*
 * File: 1-swap.c
 * Auth: idoudi mokhtar
 */

#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer 1
 * @b: pointer 2
 * Return: Always 0
 */
void swap_int(int *a, int *b)

{

  int n;
  n = *a;
  *a = *b;
  *b = n;

}
