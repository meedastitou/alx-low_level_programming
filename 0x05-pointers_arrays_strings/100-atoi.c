#include "main.h"

/**
 * _atoi - ascii to integer
 * @s: the specified string
 */

int _atoi(char *s)
{
	char *c;
	int neg,first_time, nb, curr;

	nb = curr = first_time = 0;
	neg = 1;
	for (c = s; *c != '\0' ; c++,curr++)
	{
		if ( *c == '-' && first_time == 0)
			neg = neg * -1;

		if ( *c >= '0' && *c <= '9')
		{
			first_time = 1;
			nb = (nb * 10 ) + (*c - '0');

		}
		else if( first_time)
			break;
	}
	return (neg*nb);

}
