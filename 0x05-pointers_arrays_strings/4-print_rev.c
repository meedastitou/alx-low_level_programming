#include "main.h"

/**
 * print_rev - reverser chaine
 * @s: string
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) ; i < 0 ; i--)
		_putchar(*(s + i));

}
