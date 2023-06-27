#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* main(void)
{
	char s[20];
	int i, r;

	for (i = 0 ; i < 20 ; i++)
	{
		r = rand() % 70;
		s[i] = (char)r;	
	}
	return s;
}
