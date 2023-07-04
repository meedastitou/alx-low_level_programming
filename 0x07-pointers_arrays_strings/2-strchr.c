#include "main.h"

/**
 * _strchr - occurence
 * @s: specified string
 * @c: caracter
 * Return: pointer to occurence string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
