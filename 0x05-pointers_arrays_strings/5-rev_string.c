#include "main.h"

/*
 * rev_string - reverser s
 * @s: string
 */

void rev_string(char *s)
{
	char *c;
	int len, i;
        
	for (c = s ; *c != '\0' ; c++)
		;
       
       	len = c - s;

	int cd, cf;

	for (cd= 0, cf = len - 1 ; cd < cf ; cd++, cf--)
	{
		char tmp = *(s + cd);
		*(s + cd) = *(s + cf);
		*(s + cf) = tmp;
	}	
}
