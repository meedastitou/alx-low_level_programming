#include "main.h"

/**
 * puts2 - string other character
 * @str: secified string
 */

void puts2(char *str)
{
	char *c;
	int ok = 0;

	for (c = str; *c != '\0' ; c++)
	{
		_putchar(*c);
		if(!ok)
		{
			ok = 1;
			break;
		}
	}
	_putchar('\n');
}
