#include "main.h"
#include <stdio.h>
/*
 * File: print_alphabet_x10.c
 * Return: Always 0.
 */
/**
 * print_alphabet_x10 - prints the alphabetx10 in lowercase,by a new line.
 */
void print_alphabet_x10(void)
{
  int i = 0 ;


  for (; i < 10 ; i++)
    {
      char c = 'a';
      while (c <= 'z' )
	{
	  _putchar(c++);
	}
      _putchar('\n');
    }


}
