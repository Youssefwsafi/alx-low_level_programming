#include "main.h"

/**
* _pow_recursion - return value of x power
* to the y
*
* @x: first int
* @y: second int
* Return: to pow recursion (x,y -1)
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y < 1)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
