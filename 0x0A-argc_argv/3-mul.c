#include <stdio.h>
#include "main.h"

/**
* main - Entry point.
* Description: print multiple two numbers of arguments
* @argc: the number of arguments
* @argv: the array of arguments.
* Return: always 0.
*/

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));

	return (0);
}

/**
 * str_len - calculate the length of a string
 * @s: the string
 * Return: return the length
 */

int str_len(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * _atoi - converts a string to int
 *
 * @s: string to convert
 *
 * Return: return the value of the string converted
 */

int _atoi(char *s)
{
	int result;
	int sign;
	int i;
	int len;

	i = 0;
	len = str_len(s);
	sign = 1;
	result = 0;
	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	if (len > i)
	{
		if (sign == -1)
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				result *= 10;
				result -= s[i] - 48;
				i++;
			}
		}
		else
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				result *= 10;
				result += s[i] - 48;
				i++;
			}
		}
	}
	return (result);
}
