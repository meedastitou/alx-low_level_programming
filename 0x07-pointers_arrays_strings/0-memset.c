#include "main.h"

/**
 * _memset - fills the first n byte with b
 * @s: pointer to the memory
 * @b: caracter
 * @n: the n byte
 * Return: pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n  ; i++)
		s[i] = b;
	return (s);

}
