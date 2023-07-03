#include "main.h"
#include <stdlib.h>

/**
* _strchr - locates a character in a string
* @s: string that will char locates in
* @c: char that will locates in string
* Return: pointer of c in s or NULL otherwise
*/

char *_strchr(char *s, char c);
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
