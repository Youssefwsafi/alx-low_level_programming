#include "main.h"
/**
 * print_most_numbers - a function that print from
 * 0 to 9 except two digit
 *
 */
void print_most_numbers(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		if (number == '2' || number == '4')
			number++;
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
