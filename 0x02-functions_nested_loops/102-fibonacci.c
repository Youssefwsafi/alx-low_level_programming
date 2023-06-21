#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int fib[50];

	fib[0] = 1;
	fib[1] = 2;

	printf("%d\n%d\n", fib[0], fib[1]);
	for (int i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf("%d, ", fib[i]);
	}
	return (0);
}
