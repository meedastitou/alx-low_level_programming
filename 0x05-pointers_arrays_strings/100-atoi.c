#include "main.h"

/**
 * _atoi - ascii to integer
 * @s: the specified string
 */

int _atoi(char *s)
{
	char *c;
	int i, nb, ten, curr;

	i = nb = curr = 0;
	ten = 10;
	for (c = s; *c != '\0' ; c++,curr++)
	{
		if ( *c >= '0' && *c <= '9')
		{
			if (!i) 
			{
				if (*(c + (curr - 1 )) == '-')
					nb = (nb * ten) - (*c - '0');
				else if (*(c + (curr - 1)) == '+')
					nb = (nb * ten) + (*c = '0');
				i++;
			}
			else
				nb = (nb * ten) + (*c - '0');
			
		}
		else if (i)
			break;
		
	}
	return (nb);

}
