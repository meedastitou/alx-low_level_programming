#include "main.h"

/**
 * _strpbrk - string pb rk
 * @s: string
 * @accept: accept
 * Return: pointer to string
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
				return(s + i);
		}
	}
	return (NULL);
}
