#include "main.h"

/**
 *print_alphabet - Prints alphabet in lowercase.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	putchar('\n');

}
