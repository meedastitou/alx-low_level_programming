#include "main.h"

/**
 * reverse_array - reserver a array
 * @a: pointer to an array
 * @n: number of items
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1 ; i < j ; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
	return;

}
