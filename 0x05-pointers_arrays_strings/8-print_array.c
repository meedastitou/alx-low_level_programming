#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: array
 * @n: element of array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n - 1 ; i++)
		printf("%d, ",a[i]);
	printf("%d\n",a[i]);

}
