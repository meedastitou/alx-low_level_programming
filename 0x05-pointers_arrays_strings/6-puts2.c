#include "main.h"

/**
 * puts2 - string other character
 * @str: secified string
 */

void puts2(char *str)
{
	char *c;
	int ok = 0;

	for (c = str; *c != '\0' ; c ++)
	{
	 	if( *c == '\0') 
			break;
		if(! ok)
		{
			_putchar(*c);
			ok = 1;
		}
	}
	_putchar('\n');
}
