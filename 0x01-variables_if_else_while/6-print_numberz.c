#include <stdio.h>
/**
 * main - prints digits from 0 to 10
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
