#include "main.h"

/**
 * _strspn - number of bytes in the initial s
 * @s: input
 * @accept: input
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, v, ok;

	v = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		ok = 0;

		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (accept[j] == s[i])
			{
				v++;
				ok = 1;
			}
		}

		if (ok == 0)
			return (v);
	}

	return (v);

}
