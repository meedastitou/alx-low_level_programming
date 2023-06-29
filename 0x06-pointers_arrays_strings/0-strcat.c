#include "main.h"

/**
 * _strcat - concatenation of string
 * @dest: the destination string
 * @src: the source string
 * Return: concatenation of dest and src
 */

char *_strcat(char *dest, char *src)
{
	char *d, *s;

	for(d = dest ; *d != '\0' ; d++)
		;
	for(s = src ; *s != '\0' ; s++, d++)
		*d = *s;

	*d = '\0';
	return (dest);
}
