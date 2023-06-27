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
	if(len % 2 != 0)
		i = (len-1)/2;
	else
		i = len/2;

	for (; i < len  ; i++)
			_putchar(str[i]);
	_putchar('\n');
}
