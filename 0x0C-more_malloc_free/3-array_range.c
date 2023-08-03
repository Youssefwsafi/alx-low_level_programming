#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
*/

int *array_range(int min, int max)
{
	int *array;
	int i;

	i = 0;
	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (!array)
		return (NULL);
	while (min <= max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
