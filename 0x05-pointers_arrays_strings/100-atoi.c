#include "main.h"

/**
 * _atoi - ascii to integer
 * @s: the specified string
 */

int _atoi(char *s)
{
	char *c;
	int first_time, nb, ten, curr;

	nb = curr = 0;
	first_time = 1;
	ten = 10;
	for (c = s; *c != '\0' ; c++,curr++)
	{
		if ( *c >= '0' && *c <= '9')
		{
			if (curr != 0 && first_time == 1 ){
				if( *(c + curr -1 )== '-')
					nb = (nb * ten) - (*c - '0');
				
				first_time ++;
				continue;
			}
			nb = (nb * ten) + (*c - '0');
		}
		
	}
	return (nb);

}
