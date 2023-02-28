/********************************************************************************************
 * File: 5-rev_string.c
 * Auth: idoudi mokhtar
 */


#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverse string
 * @s: string
 * Return: always 0
 */

void rev_string(char *s)
{
int i = 0;
int dot = 0;
char charg;

while (s[i] != '\0')
{
i++;
}
i--;
while (dot < i)
{
charg = s[i];
s[i] = s[dot];
s[dot] = charg;
dot++;
i--;
}
}
