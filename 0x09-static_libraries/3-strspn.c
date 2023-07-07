#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string
 * @accept: the substring
 * Return: the index reached
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int value;

	value = 0;
	j = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		value = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				value = 1;
			}
			j++;
		}
		if (value == 0)
			return (i);
		i++;
	}
	return (i);
}
