#include "main.h"

/**
 * _strcpy - copy string src to dest
 * @dest: string of destination
 * @src: string of source
 * Return: return a pointer to char
 */

char *_strcpy(char *dest, char *src)
{
	char *c1,*c2;
	for ( c1 = src,c2 = dest ; *c1 != '\n' ; c1++,c2++)
		*(dest + c2) = *c1;

	*(dest + c2) = '\0';
	
		
}
