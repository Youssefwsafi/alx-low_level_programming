#include <stdio.h>
/**
 * main - prints alphabet from a to z in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';
	while (letter <= 'z')
	putchar(letter);
	letter++;
	putchar('\n');
	return (0);
}	
