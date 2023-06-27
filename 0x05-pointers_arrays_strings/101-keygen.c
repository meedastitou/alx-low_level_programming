#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char s[100];
	int i, r;

	srand(time(NULL));

	for (i = 0 ; i < 100 ; i++)
	{
		r = rand() % 126;
		s[i] = (char)r;	
	}
	s[99] = '\0';
	printf("%s", s);
	return (0);
}
