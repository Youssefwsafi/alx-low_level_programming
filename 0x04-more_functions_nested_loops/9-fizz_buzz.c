#include <stdio.h>

/**
 * main - entry point
 *
 * description: FizzBuzz HuH
 *
 * Return: always 0 (success)
 **/

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
		i++;
	}
	printf("\n");
	return (0);
}
