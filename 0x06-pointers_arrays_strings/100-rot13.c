#include "main.h"

/**
 * rot13 - rotate by 13 places 'Caesar Cipher'
 * @s: the string to convert
 * Return: the converted string
 **/

char *rot13(char *s)
{
	int i;

	char R13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char r13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *ptr = s;


	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == R13[i])
			{
				*s = r13[i];
				break;
			}

		}
		s++;
	}
	return (ptr);
}
