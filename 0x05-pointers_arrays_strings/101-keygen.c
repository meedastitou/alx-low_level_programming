#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *s = "Tada! Congrats";
	int i,r;

	for (i = 0 ; i < strlen(s) ; i++)
	{
		r = rand() % strlen(s);
		char tmp = s[i];
		s[i] = s[r];
		s[r] = tmp;	
	}
	printf("%s", s);

	return 0;
}
