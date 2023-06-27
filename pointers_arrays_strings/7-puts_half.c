#include "main.h"
#include "string.h"

/**
 * puts_half - print second half
 * @str: string
 * Return: second half of string to stoud
 */
void puts_half(char *str)
{
  int len = strlen(str);
  for (len /= 2; str[len] != '\0';len++) //len/=2 equivalent a len=len/2
    {
      _putchar(str[len]);

    }
  _putchar('\n');
}
