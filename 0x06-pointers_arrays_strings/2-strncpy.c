#include "main.h"

/**
 * _strncpy - copy src in dest
 * @dest: destination string
 * @src: source string
 * @n: size
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	for ( i = 0 ; src[i] != '\0' && i < n ; i++)
		dest[i] = src[i];

	return (dest);
}
