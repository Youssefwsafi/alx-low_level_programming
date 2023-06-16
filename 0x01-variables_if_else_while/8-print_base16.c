#include <stdio.h>
/**
 * main - prints digits of base16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit = 48;/*decimal rep of 0*/

	while (digit <= 102) /*102 decimal rep of f*/
	{
		putchar(digit);
		digit++;

		if (digit == 57)
			digit += 39;
	}
	putchar('\n');

	return (0);
}
