#include "main.h"

/**
 * _strspn - number of bytes in the initial s
 * @s: input
 * @accept: input
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, v, ok;

	v = 0;

	for (n = 0 ; accept[n] != '\0' ; n++)
	{
		ok = 0;
		for (i = 0 ; s[i] != '\0' ; i++)
		{
			if (accept[n] == s[i])
			{
				v++;
				ok = 1;
			}
		}
		if(ok == 0)
		{
			
		}

	}

	return (v);

}
