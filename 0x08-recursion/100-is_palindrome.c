#include "main.h"

/**
* _strlen_recursion - length recursion
* @s: value of string
* Return: always 0
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
* is_pali_helper - function that check if palio
* @s: string value
* @i: first variable
* @j: second variable
* Return: always 0
*/
int is_pali_helper(char *s, int i, int j)
{
	if (i >= j)
	return (1);
	if (s[i] != s[j])
	return (0);
	return (is_pali_helper(s, i + 1, j - 1));
}

/**
* is_palindrome - is a palindrome
* @s: string value
* Return: 1 if s is pali 0 otherwise
*/

int is_palindrome(char *s)
{
	int start = 0, end = _strlen_recursion(s) - 1;

	return (is_pali_helper(s, start, end));
}
