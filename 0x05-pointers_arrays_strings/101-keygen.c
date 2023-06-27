#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char s[20];
	int i, r;

	srand(time(NULL));

	for (i = 0 ; i < 20 ; i++)
	{
		r = rand() % 70;
		s[i] = (char)r;	
	}
	s[i] = '\0';
	printf("%s", s);
	return (0);
}
