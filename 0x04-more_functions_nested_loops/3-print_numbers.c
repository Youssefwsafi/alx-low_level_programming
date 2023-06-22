#include "main.h"

/**
 ** print_numbers - function that prints
 * digits to 9
 *
 *.
 **/
void print_numbers(void)
{
	int digit = 0;


	while (digit <= 9)
	{
		_putchar(digit + '0');
		digit++;
	}

	_putchar('\n');
}
