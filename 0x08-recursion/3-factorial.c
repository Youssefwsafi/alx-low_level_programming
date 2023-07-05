#include "main.h"

/**
* factorial - return a factorial of given number
* @n: given number
* Return: factorial n
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n < 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
