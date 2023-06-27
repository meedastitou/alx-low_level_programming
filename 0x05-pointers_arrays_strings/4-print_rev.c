#include "main.h"

/**
 * print_rev - reverser chaine
 * @s: string
 */


void print_rev(char *s)
{
	char *c;
	int i;
        for (c = s; *c != '\0'; c++)
                ;
       
       	i = c - s;

	for (i = _strlen(s) ; i < 0 ; i--)
		_putchar(*(s + i));

}
