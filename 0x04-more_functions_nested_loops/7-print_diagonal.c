#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 *
 * @n: take the input
 *
 */

void print_diagonal(int n)
{
	int i;
	int spaces;

	i = 1;
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i <= n)
		{
			spaces = i - 1;
				while (spaces > 0)
				{
					_putchar(' ');
					spaces--;
				}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
