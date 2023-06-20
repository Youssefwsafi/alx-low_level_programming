#include "main.h"

/**
 * main - print alphabet using alphabet prototype
 *
 * Return: always 0 (success)
 *
*/

void print_alphabet(void)
{
	int i = 97;

	while (i <= 'z')
	{
		_putchar(i++);
	}
	putchar('\n');
	return (0);
}
