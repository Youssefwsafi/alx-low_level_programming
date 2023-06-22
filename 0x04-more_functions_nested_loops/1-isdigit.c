#include "main.h"
#include <stdio.h>

/**
 ** _isdigit - function that check
 * for a digit
 *
 * @c: takes the input
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
