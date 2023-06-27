#include "main.h"

/**
 * _atoi - ascii to integer
 * @s: the specified string
 */

int _atoi(char *s)
{
	char *c;
	int i = 0, nb = 0, ten = 1;

	for (c = s; *c != '\0';c++)
	{
		if( *c >= '0' && *c <= '9')
		{
			i++;
			nb = (nb * ten) + (*c - '0');
			ten *= 10;
			
		}
		else if (i)
			break;
		
	}
	return (nb);

}
