#include "main.h"

/*
 * rev_string - reverser s
 * @s: string
 */

void rev_string(char *s)
{	
	char cd, cf;

	for (cd = s, cf = _strlen(s) - 1 ; cd < cf ; cd++, cf--)
	{
		char tmp = cd;
		cd = cf;
		cf = tmp;
	}	
}
