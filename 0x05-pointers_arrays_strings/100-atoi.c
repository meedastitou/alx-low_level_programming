#include "main.h"

/**
 * _atoi - ascii to integer
 * @s: the specified string
 */

int _atoi(char *s)
{
	char *c;
	int neg,first_time, nb, curr;

	neg = nb = curr = 0;
	first_time = 0;
	for (c = s; *c != '\0' ; c++,curr++)
	{
		if ( *c >= '0' && *c <= '9')
		{
			first_time = 1;

			if( curr > 0 && *(s + (curr - 1)) == '-')
				neg = 1;
			
			nb = (nb * 10 ) + (*c - '0');


		}
		else if( first_time)
			break;
	}
	if( neg ) return (-nb);

	return (nb);

}
