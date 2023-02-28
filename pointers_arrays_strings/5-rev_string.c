/*
 * File: 5-rev_string.c
 * Auth: idoudi mokhtar
 */

#include <stdio.h>
#include "main.h"
#include <string.h>

void rev_string(char *s)
{
  char str[50] = "123456789";

  printf("The given string is =%s\n", str);

  printf("After reversing string is =%s", strrev(str));

  return 0;
}
