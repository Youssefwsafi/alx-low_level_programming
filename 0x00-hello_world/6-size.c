#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program that print size of data type
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("size of a char: %c byte(s)\n", sizeof(char));
	printf("size of a int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %li byte(s)\n", sizeof(long int));
	printf("size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
