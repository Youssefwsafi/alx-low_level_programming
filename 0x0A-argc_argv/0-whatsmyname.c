#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Description: prints the program name
* @argc: arguments count
* @argv: array arguments
* Return: always 0.
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
