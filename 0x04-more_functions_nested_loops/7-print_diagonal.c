#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 *
 * @n: take the input
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int pn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pn = 1; pn <= n; pn++)
		{
			for (space = 1; space <= pn; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
