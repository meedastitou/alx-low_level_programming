#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: our input
 * Return: 1 if c is digit, 0 else
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}	
