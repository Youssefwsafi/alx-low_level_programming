#include "main.h"

/**
 * puts2 - prints every other char in a string starting from first one
 *
 * @str: string to print
 **/

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
