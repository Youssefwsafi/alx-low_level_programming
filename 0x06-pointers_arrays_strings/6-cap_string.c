#include "main.h"

/**
* cap_string - capitalize all words of string
* @s: string
* Return: string with capitalized word
*/

char *cap_string(char *s)
{
	int i;

	i = 0;
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -= 32;
	}
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
			|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
			|| s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
			|| s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 'a' - 'A';
		}

		i++;
	}
	return (s);
}
