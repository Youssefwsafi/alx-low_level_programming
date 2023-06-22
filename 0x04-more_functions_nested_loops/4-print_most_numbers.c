#include "main.h"
/**
 * print_most_numbers - a function will print from
 * 0 to 9 except two digit
 *
 */
void print_most_numbers(void)
{
	int digit;

	for (digit = 9; digit <= 9; digit++)
		{
		if (digit == 2 || digit == 4)
			digit++;
			_putchar(digit + 48);
		}
		_putchar('\n');



}
