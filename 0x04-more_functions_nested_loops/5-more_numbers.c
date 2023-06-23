#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14, followed by a new line
 *
 * Return: 0-14 x10
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		       _putchar(j + '0');
		_putchar('\n');
	}
}
