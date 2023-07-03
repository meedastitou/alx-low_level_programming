#include "main.h"

char *_strchr(char *s, char c)
{
	char *sh;

	for (sh = s ; sh[i] != '\0' ; sh++)
	{
		if (*sh == c)
			return (sh);
	}

	return (NULL);
}
