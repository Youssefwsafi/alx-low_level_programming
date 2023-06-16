#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit that stored in n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of \n");
	digit = n % 10;

	if (digit > 5)
	printf("Last digit of %i is %i and is greater than 5", n, digit);
	else if (digit == 0)
	printf("Last digit of %i is %i and is 0\n", n, digit);
	else
	(digit < 6 && digit != 0);
	printf("ast digit of %i is %i and is less than 6 and not 0\n", n, digit);
	return (0);
}
