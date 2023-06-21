#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int fib1 = 1;
	int fib2 = 2;
	int sumFib = fib1 + fib2;


	printf("%d\n%d\n", fib1, fib2);

	while (sumFib <= 4000000)
	{
	printf("%d\n", sumFib);
	fib1 = fib2;
	fib2 = sumFib;
	sumFib = fib1 + fib2;
	}

	printf("\n");

	return (0);
}
