#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - function that create an array of chars
* and initializes it with a specific char.
* @size: size of arrayy
* @c: char to initialize
* Return: pointer n
**/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);
		if (size == 0 || n == 0)
		return (NULL);
	while (size--)
	n[size] = c;

	return (n);
}
