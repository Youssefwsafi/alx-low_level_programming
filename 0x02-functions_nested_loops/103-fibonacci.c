#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int i;
	unsigned long int f1, f2, next, sum;

	f1 = 1;
	f2 = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
	if (f1 < 4000000 && (f1 % 2) == 0)
	{
	sum = sum + f1;
	}
	next = f1 + f2;
	f1 = f2;
	f2 = next;
	}

	printf("%lu\n", sum);

	return (0);
}
