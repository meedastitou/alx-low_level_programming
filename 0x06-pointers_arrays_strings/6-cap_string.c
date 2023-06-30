#include "main.h"

/**
 * cap_string - captelize all string
 * @s: specified string
 * Return: pointer to the captelize string
 */

char *cap_string(char *s)
{
	int i = 0;

	s[i] -= 32;
	i++;
	for (; s[i] != '\0' ; i++)
	{
		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
			|| s[i - 1] == ',' || s[i - 1] == '!' || s[i - 1] == '?'
			|| s[i - 1] == '.' || s[i - 1] == '{' || s[i - 1] == '}'
			|| s[i - 1] == ';' || s[i - 1] == '(' || s[i - 1] == ')'
			|| s[i - 1] == '"' && s[i] != ' ' || s[i] != '\t' || s[i] != '\n'
                        || s[i] != ',' || s[i] != '!' || s[i] != '?'
                        || s[i] != '.' || s[i] != '{' || s[i] != '}'
                        || s[i] != ';' || s[i] != '(' || s[i] != ')'
                        || s[i] != '"' )
			s[i] -= 32;
	}
	return (s);

}
