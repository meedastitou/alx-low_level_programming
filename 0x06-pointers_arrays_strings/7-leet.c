#include "main.h"

/**
 * leet - encodage
 * @s: sepcified string
 * Return: pointer to string
 */

char *leet(char *s)
{
	char tab[8] = {'o', 'l', ' ', 'e', 'a', ' ', ' ', 't'};
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			if (s[i] == s[j] && s[j] != ' ')
				s[i] = j;
		}

	}

	return (s);
}
