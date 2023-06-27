#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *s = "Tada! Congrats";
	int i, r, size;

	size = (int)strlen(s);
	for (i = 0 ; i < size ; i++)
	{
		r = rand() % size;
		char tmp = s[i];
		s[i] = s[r];
		s[r] = tmp;	
	}
	printf("%s", s);

	return 0;
}
