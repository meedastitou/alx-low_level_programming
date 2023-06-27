#include "main.h"

/**
 * _strcpy - copy string src to dest
 * @dest: string of destination
 * @src: string of source
 * Return: return a pointer to char
 */

char *_strcpy(char *dest, char *src)
{
	char* c1
	char* c2;

	for (c1 = src, c2 = dest ; *c1 != '\0' ; c1++, c2++)
		*c2 = *c1;

	*c2 = '\0';
	
	return (dest);	
}
