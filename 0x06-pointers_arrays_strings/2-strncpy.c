#include "main.h"

/**
 * _strncpy - copies n bytes from src to dest
 * @dest: string's destination
 * @src: string's source
 * @n: the number of bytes
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && *(src + count) != '\0'; count++)
		*(dest + count) = src[count];

	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
