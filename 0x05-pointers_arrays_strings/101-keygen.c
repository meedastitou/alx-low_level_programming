#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char s[20];
	char tmp;
	int i, r;

	for (i = 0 ; i < 20 ; i++)
	{
		r = rand() % 70;
		s[i] = (char)r;	
	}
	printf("%s", s);

	return 0;
}
