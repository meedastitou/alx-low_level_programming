#include "main.h"

/**
 * puts2 - string other character
 * @str: secified string
 */

void puts2(char *str)
{
	char *c;

	for (c = str; *c != '\0' ; c += 2)
		_putchar(*c);

	_putchar('\n');
}
