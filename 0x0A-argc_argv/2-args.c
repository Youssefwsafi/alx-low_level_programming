#include <stdio.h>

/**
* main - Entry point.
* Description: print all arguments its received
* @argc: arguments number
* @argv: argument array
* Return: always 0.
**/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
