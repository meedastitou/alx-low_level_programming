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
	len = (c - str)/2;
	if(len % 2 != 0)
		len--;
	for (; i < len ; i++)
			_putchar(str[i]);
	_putchar('\n');
}
