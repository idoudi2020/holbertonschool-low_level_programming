#include "main.h"
/**
 * _isalpha - main function
 *
 * @c: character to compare
 *
 * Return: 1 if true, 0 if not
 *
 */

int _isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
      return (1);
    }
  return (0);
}
