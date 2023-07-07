#include <stdio.h>

/**
* main - program that print its name
* @argc: arguments count
* @argv: arguments vector
*/

void main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
}
