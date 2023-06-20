#include <stdio.h>
#include "main.h"
/**
 * main - is the entry point 
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 * Return: Always 0
 */


void print_alphabet(void)
{
  char i = 'a';


  while (i <= 'z')
    {
      _putchar(i++);
    }
  _putchar('\n');

}
