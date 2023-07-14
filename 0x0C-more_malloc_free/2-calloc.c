#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: buffer in the memory
 * @b: the character to fill n bytes of memory
 * @n: the length of memory to be filled using _memset
 * Return: (s).
 */

/*
*we called memset to initialize the allocated memory block to zero,
ensuring that the memory is properly
initialized before it is used by the program.
*/

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: the number of elements
 * @size: the size of each element
 * Return: to ptr if its works, NULL otherwise.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
