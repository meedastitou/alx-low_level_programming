#include "main.h"

/**
 * cap_string - captelize all string
 * @s: specified string
 * Return: pointer to the captelize string
 */

char *cap_string(char *s)
{
	int i = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		while (s[i] < 'a' || s[i] > 'z')
			i++;
		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
			|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
			|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"'
			|| s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
			|| s[i - 1] == '}' || i == 0)
			s[i] -= 32;
	}
	return (s);

}
