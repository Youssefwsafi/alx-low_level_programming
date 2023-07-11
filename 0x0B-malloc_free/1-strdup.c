#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory
*  which contains a copy of the string given as a parameter
* @str: string
* Return: pointer value.
*/

char *_strdup(char *str)
{
	char *n_str;
	int i;

	if (str == NULL)
		return (NULL);
	i = 0;
	n_str = _create_array(_strlen(str) + 1);
	if (!n_str)
		return (NULL);
	while (i <= _strlen(str))
	{
		n_str[i] = str[i];
		i++;
	}
	return (new_str);
}

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

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
