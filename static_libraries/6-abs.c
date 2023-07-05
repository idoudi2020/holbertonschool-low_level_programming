#include "main.h"
/**
 * _abs - main function
 *
 * @number: integer to make absolute
 * Return: int or int times negative
 *
 */

int _abs(int number)
{

  if (number > 0)
    return (number);
  else
    return (number * -1);
}
