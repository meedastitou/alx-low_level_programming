#include "main.h"

/**
 * _strcmp - compare string
 * @s1: first string
 * @s2: second string
 * Return: an int
 */

int _strcmp(char *s1, char *s2)
{
	char *c1, *c2;

	for (c1 = s1, c2 = s2; *c1 != '\0' && *c2 != '\0'; c1++, c2++)
	{
		if (*c1 != *c2)
			return (*c1 - *c2);
	}

	return (0);
}
