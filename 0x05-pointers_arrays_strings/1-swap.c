#include "main.h"

/**
 * swap_int - a function that swaps value of two integers
 *
 * @a: value of the first int
 * @b: value of the second int
 **/

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
