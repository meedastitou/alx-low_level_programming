#include "main.h"

/**
 * print_rev - reverser chaine
 * @s: string
 */

void print_rev(char *s)
{
	int len;

	for (len = _strlen(s) - 1 ; len < 0 ; len--)
		_putchar(*(s+len));

}
