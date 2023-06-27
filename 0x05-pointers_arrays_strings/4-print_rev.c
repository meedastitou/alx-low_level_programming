#include "main.h"

/**
 * print_rev - reverser chaine
 * @s: string
 */

void print_rev(char *s)
{
	char *c;
	int len, i;
        for (c = s ; *c != '\0' ; c++)
		;
       
       	len = c - s;

	for (i = len - 1 ; i <= 0 ; i--)
		_putchar(s[i]);

	_putchar('\n');
}
