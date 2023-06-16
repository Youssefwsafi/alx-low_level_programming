#include <stdio.h>
/**
 * main - prints 0-9 using putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII */
		putchar(digit + '0');
		digit++;
	}
	putchar("\n");

	return (0);
}
