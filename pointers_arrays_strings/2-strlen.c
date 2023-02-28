/*
 * File: 2-strlen.c
 * Auth: idoudi mokhtar
 */

#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}
