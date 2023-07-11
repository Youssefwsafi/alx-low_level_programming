#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - a function that return
 * the length of a string
 *
 * @s: value of the string
 *
 * Return: to size
 **/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)

	return (size);
}

/**
* str_concat - concatunate two strings
* @s1: first string
* @s2: second string
* Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *p;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	p = malloc((size1 + size2) * sizeof(char) + 1);

	if (p == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			p[i] = s1[i];
		else
			p[i] = s2[i - size1];
	}
	p[i] = '\0';
	return (p);
}
