#include "main.h"

/*
 * rev_string - reverser s
 * @s: string
 */

void rev_string(char *s)
{	
	int cd, cf;

	for (cd= 0, cf = _strlen(s) - 1 ; cd < cf ; cd++, cf--)
	{
		char tmp = *(s + cd);
		*(s + cd) = *(s + cf);
		*(s + cf) = tmp;
	}	
}
