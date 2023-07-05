#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer
 * Return: string converted to int
 */

int _atoi(char *s)
{
  unsigned int num =0;
  int sign =1;
   do
     {
       if (*s =='-')
	 sign = (sign * -1);
       else if (*s >= '0' && *s <= '9')
	 num =(num * 10) + (*s -'0');
       else if (num>0)
	 break;


     } while (*s++);
   return (num *sign);
}
