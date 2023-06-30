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
	int i, src_len;

	src_len = 0;
	for ( i = 0 ; src[i] != '\0' ; i++)
		src_len++;

	for (i = 0 ; src[i] != '\0' && i < n ; i++)
	{
		if (i >= src_len ) dest[i] = '\0';
		else
			dest[i] = src[i];
	}
	return (dest);

}
