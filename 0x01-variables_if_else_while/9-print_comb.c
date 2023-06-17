#include <stdio.h>
/**
 * main - prints digits from 0-9 with commas
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		if (digit != 9)
		{
		putchar(',');
		putchar(' ');
		}

		digit++;
	}
	putchar('\n');

	return (0);
}