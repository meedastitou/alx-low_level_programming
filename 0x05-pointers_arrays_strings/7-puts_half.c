#include "main.h"

/**
 * puts_half - half string
 * @str: string specified
 */

void puts_half(char *str)
{
	char *c;
	int len, i;

	for (c = str; *c != '\0' ; c++)
		;
	len = c - str;
		for (i = len / 2 ; i < len ; i++)
			_putchar(str[i]);
	_putchar('\n');
}
