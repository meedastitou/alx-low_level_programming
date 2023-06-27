#include "main.h"

/**
 * _puts - print string
 * @str: string
 */ 
void _puts(char *str)
{
	char *c;

	for(c = str ; c != '\0' ; c++)
		_putchar(c);

	_putchar('\n');
}
