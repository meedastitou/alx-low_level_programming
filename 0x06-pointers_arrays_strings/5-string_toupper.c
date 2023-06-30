#include "main.h"

/**
 * string_toupper - convert s too uppercase S
 * @s: specified string
 * Return: string converted
 */

char *string_toupper(char *s)
{
	char *ptr;

	for (ptr = s ; *ptr != '\0' ; ptr++)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
	}

	return (s);
}
