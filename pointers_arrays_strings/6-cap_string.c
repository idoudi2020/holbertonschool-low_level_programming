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
  int hyphen= 0;

  while (str[hyphen])
    {
      if (str[hyphen] >= 'a' && str[hyphen] <= 'z')
	str[hyphen] -= 32;

      hyphen++;
    }

  return (str);
}
