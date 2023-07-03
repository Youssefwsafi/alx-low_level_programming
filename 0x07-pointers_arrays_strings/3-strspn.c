#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string
 * @accept: the substring
 * Return: the index reached
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, found;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				found = 1;
			}
		}
	}
}
