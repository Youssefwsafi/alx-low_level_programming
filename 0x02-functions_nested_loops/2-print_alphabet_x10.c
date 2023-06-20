#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lower case 10 times
 *
 **/

void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 97;
		while (j <= 'z')
		{
			_putchar(j++);
		}
		_putchar('\n');
		i++;
	}
}
