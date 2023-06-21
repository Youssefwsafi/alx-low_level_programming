#include "main.h"

/**
 * print_times_table - print table of n
 *
 *@n: take num input
*/

void print_times_table(int n)
{
	int num, plu, com;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (plu = 1; plu <= n; plu++)
			{
				_putchar(',');
				_putchar(' ');

				com = num * plu;

				if (com <= 9)
				_putchar(' ');
				if (com <= 99)
				_putchar(' ');
				if (com >= 100)
				{
				_putchar((com / 100) + 48);
				_putchar((com / 10) % 10 + 48);

				} else if (com <= 99 && com >= 10)
				_putchar((com / 10) + 48);
			_putchar((com % 10) + 48);
			}

			_putchar('\n');
		}
	}
}
