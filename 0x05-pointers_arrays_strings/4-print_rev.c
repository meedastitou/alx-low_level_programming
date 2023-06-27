#include "main.h"

int _strlen(char * s)
{
	char *c;

	for (c = s; *c != '\0'; c++)
		;
	return (c - s);

}

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
