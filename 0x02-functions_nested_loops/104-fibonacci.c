#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
*/

int main(void)
{
	unsigned long int a1 = 0, b1 = 1, f2 = 0, b2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", b1, b2);
	for (count = 2; count < 98; count++)
	{
	if (b1 + b2 > LARGEST  f2 > 0  a1 > 0)
	{
	hold1 = (b1 + b2) / LARGEST;
	hold2 = (b1 + b2) % LARGEST;
	hold3 = a1 + f2 + hold1;
	a1 = f2, f2 = hold3;
	b1 = b2, b2 = hold2;
	printf("%lu%010lu", f2, b2);
	}
	else
	{
	hold2 = b1 + b2;
	b1 = b2, b2 = hold2;
	printf("%lu", b2);
	}
	if (count != 97)
	printf(", ");
	}
	printf("\n");
	return (0);
}
