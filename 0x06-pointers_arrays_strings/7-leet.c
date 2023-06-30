#include "main.h"

/**
 * leet - encodage
 * @s: sepcified string
 * Return: pointer to string
 */

char *leet(char *s)
{
	char *tab1  = "oOlLeEaAtT";
	char *tab2  = "0011334477";
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (s[i] == tab1[j])
				s[i] = tab2[j];
		}

	}

	return (s);
}
