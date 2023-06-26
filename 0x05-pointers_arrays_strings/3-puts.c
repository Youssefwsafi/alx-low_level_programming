#include "main.h"

/**
 * _puts - a function that prints as tring
 * followed by new line
 *
 * @str: string to print
 **/
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
