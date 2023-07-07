#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that check
 * if c is uppercase
 *
 * @c: takes the input
 *
 * Return: 1 if c isupper, 0 otherwise
**/
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
