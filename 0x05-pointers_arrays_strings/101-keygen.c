#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *s = "Tada! Congrats";
	char tmp;
	int i, r, size;

	size = (int)strlen(s);
	for (i = 0 ; i < size ; i++)
	{
		tmp = s[i];
		r = rand() % size;
		s[i] = s[r];
		s[r] = tmp;	
	}
	printf("%s", s);

	return 0;
}
