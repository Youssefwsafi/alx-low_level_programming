#include "main.h"

/**
*_strcat - Concatenates two strings
*
* @dest: the first string
* @src: the second string
* Return: return to dest
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	dest[i] = ' ';
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
