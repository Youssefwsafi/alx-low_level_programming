#include "main.h"

/**
 * times_table - print table of 9 digits
 *
 *
 **/

void times_table(void)
{
	int num, plu, com;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (plu = 1; plu <= 9; plu++)
		{
			_putchar(',');
			_putchar(' ');

			com = num * plu;

			if (com <= 9)
				_putchar(' ');
			else
				_putchar((com / 10) + 48);
			_putchar((com % 10) + 48);
		}
		_putchar('\n');
	}
}
