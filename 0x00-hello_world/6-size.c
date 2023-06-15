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
	printf("size of a char :", sizeof(char));
	printf("size of a int :", sizeof(int));
	printf("size of a long int :", sizeof(long int));
	printf("size of a long long int :", sizeof(long long int));
	printf("size of a float :", sizeof(float));
	return (0);
}
