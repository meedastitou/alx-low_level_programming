#include "main.h"

/**
 * _strlen - return len of a string
 * @s: the string
 * Return: return len of s
 */
int _strlen(char *s)
{
	char *c;

	for (c = s ; *c != '\0' ; c++);	
	return (c - s);

}
