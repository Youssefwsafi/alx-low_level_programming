#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the number of arguments.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	i = 1;
	while (i < argc)
	{
		if (check_str_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		sum += _atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
