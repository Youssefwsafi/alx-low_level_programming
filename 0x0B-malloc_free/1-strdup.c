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
	char *c;
	int i, m = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	c = malloc(sizeof(char) * (i + 1));

	if (c == NULL)
		return (NULL);

	for (m = 0; str[r]; m++)
		c[m] = str[m];

	return (c);

}
