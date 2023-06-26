#include "main.h"

/**
 * _puts - a function that prints as tring
 * followed by new line
 *
 * @str: string to print
 **/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
