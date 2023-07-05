#include "main.h"

/**
 * _strlen_recursion - a function that return
 * the length of a string in recursion
 *
 * @s: value of the string
 *
 * Return: to length of string
 **/

int _strlen(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));

}
