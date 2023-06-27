#include "main.h"

/**
 * puts2 - string other character
 * @str: secified string
 */

void puts2(char *str)
{
	char *c;
	int ok = 1;

	for (c = str ; *c != '\0' ; c++, ok++)
	{
		if (*c == '\0')
			break;
		if (ok % 2 != 0)
			_putchar(*c);
	}
	_putchar('\n');
}
