#include "main.h"

/**
 * print_rev - reverser chaine
 * @s: string
 */

void print_rev(char *s)
{
	int len, i;
	char *c;

	for (c = s ; *c != '\n' ; c++)
		;
	len = c - s;

	for (i = len; i < 0 ; i--)
		_putchar(*(s+i));

}
