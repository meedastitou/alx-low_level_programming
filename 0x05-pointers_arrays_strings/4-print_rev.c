#include "main.h"

/**
 * print_rev - reverser chaine
 * @s: string
 */

void print_rev(char *s)
{
	char *c;

	for (c = _strlen(s) - 1 ; c == s ;  c--)
		_putchar(*c);

}
