#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *  * main - Prints alphabet
 *   * @void: Empty parameter list for main.
 *    *
 *     * Description: Prints the alphabet in lower and upper case
 *      *  use only putchar
 *       *
 *        * Return: 0 for success
 *        */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	return (0);
}
