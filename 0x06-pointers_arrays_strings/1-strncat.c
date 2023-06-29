#include "main.h"

/**
 * _strncat - concatenation function
 * @dest: the destination string
 * @src: the soutece string
 * @n: the size
 * Return: return concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *d;
	int i;

	for (d = dest ; *d != '\0' ; d++)
		;
	for (i = 0 ; i < n ; i++, d++)
		*d = src[i];

	*d = '\0';
	return (dest);
}
