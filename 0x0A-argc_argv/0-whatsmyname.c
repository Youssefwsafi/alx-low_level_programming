#include "main.h"
#include <stdio.h>

/**
* main - program that print its name
* @argc: arguments count
* @argv: array arguments
* return: always 0.
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
