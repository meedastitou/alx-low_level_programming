#include "main.h"

/**
 * swap_int - swap to number
 * @a: first num
 * @b: second num
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

}
