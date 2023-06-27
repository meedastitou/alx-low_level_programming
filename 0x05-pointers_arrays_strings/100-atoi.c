#include "main.h"

/**
 * _atoi - ascii to integer
 * @s: the specified string
 * Return: an integer
 */

int _atoi(char *s)
{
	char *c;
	int pos, first_time, nb, curr;

	nb = curr = first_time = 0;
	pos = 1;
	for (c = s ; *c != '\0' ; c++, curr++)
	{
		if (*c == '-' && first_time == 0)
			pos *= -1;

		if (*c >= '0' && *c <= '9')
		{
			first_time = 1;
			nb = nb + (*c - '0');


		}
		else if (first_time)
			break;
	}
	return (pos*nb);

}
