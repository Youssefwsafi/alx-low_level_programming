#include "main.h"

/**
 * print_rev - prints string reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int li = 0;
	int p;

	while (*s != '\0')
	{
		li++;
		s++;
	}
	s--;
	for (p = li; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
