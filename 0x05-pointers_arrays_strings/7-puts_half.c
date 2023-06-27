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
	len = c - s;
	if (len % 2 != 0 ) _putchar(s[len-1]);
	else{
		for (i = len / 2 ; i < len ; i++)
			_putchar(s[i]);
	}
	_putchar('\n');
}
