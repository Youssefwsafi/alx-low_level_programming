#include "main.h"
/**
 * _isalpha - to check alphabetic upper or lowercase
 *
 * @c: checks input of function
 * Return: 1 if 'c' is lowercase
 *	otherwise always 0 (seccess)
 **/
int _isalpha(int c)
{

	{
	if (c >= 98 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

}
