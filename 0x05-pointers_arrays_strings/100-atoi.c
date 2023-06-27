#include "main.h"

/**
 * _atoi - ascii to integer
 * @s: the specified string
 */

int _atoi(char *s)
{
	char *c;
	int i, nb, ten;

	i = nb = 0;
	ten = 10;
	for (c = s; *c != '\0' ; c++)
	{
		if ( *c >= '0' && *c <= '9')
		{
			if (!i) 
			{
				if(*c == '-')
					ten = -1;
				else if(*c == '+')
					ten = +1;
			}
			i++;
			nb = (nb * ten) + (*c - '0');
			
		}
		else if (i)
			break;
		
	}
	return (nb);

}
