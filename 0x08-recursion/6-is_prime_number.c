#include "main.h"

/**
* is_prime_number - function that check if int is prime
*
* @n: numbet to check
* Return: 1 if prime,0 otherwise
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	return (if_is_it_prime(n, 3));
}

/**
* if_is_it_prime - check the n if prime
* @n: the number to check
* @i: number to check if n is divisible by
* Return: to 1 if prime,0otherwise
*
**/

int if_is_it_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (if_is_it_prime(n, i + 2));
}
