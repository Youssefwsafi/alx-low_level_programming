#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int cal;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (cal = 0; cal < 50; cal++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (cal == 49)
			printf("\n");
		else
			printf(", ");

	}
	return (0);
}
