#include "main.h"

/**
 * _memcpy - copy n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: n bytes
 * Return: a pointer to source memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);

}
