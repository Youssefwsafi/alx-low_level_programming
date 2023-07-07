#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: integer
 *
 * Return: always 0 (success)
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
