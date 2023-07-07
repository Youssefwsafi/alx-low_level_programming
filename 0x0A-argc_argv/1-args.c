#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Description: print number of arguments
* @argc: number of arguments
* @argv: array of arguments
* Return: always 0.
*/

int main(int argc, char *argv[])
{
	while (argv[argc])
		argc++;
	printf("%d\n", argc - 1);
	return (0);
}
