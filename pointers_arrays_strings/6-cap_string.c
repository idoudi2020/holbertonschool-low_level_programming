/*
 * File: 5-string_toupper.c
 * Auth: idoudi mokhtar
 */
#include <stdio.h>
#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string
 * @s: variable with the string
 * Return: always 0
 */

char *string_toupper(char *str)
{
  int index = 0;

  while (str[index])
    {
      if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;

      index++;
    }

  return (str);
}
