#include "main.h"

/**
 * _islower - function to check if c is lowercase
 *
 * @c: checks input of function
 * Return: 1 if 'c' is lowercase
 *	otherwise always 0 (seccess)
 **/

int _islower(int c)
{
	if (c >= 98 && c <= 122)
		return (1);
	return (0);
}
