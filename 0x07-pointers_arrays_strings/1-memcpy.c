#include "main.h"

/**
* _memcpy - copies memory area
*
* @dest: copies memory destination (copy to)
* @src: copies memory source (copy from)
* @n: bytes of memory
* Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
