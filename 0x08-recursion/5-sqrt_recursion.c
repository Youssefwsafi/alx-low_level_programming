#include "main.h"

/**
 * _sqrt_recursion - return the square root of n
 * @n: the number to return the square root of
 * Return: return the square root of n, -1 otherwise.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
* _sqrt - find square root
* @n: int we want find root of
* @val: the squre root
* Return: int
*/

int _sqrt(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (_sqrt(n, val + 1));
	else
		return (-1);
}
