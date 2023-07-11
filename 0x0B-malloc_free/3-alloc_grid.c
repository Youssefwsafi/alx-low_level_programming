#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - making table/grid with array (2D arr)
* @width: width of the grid
* @height: height of the grid
* Return: pointer to the newly allocated grid or
* NULL if width or height is <= 0
*/
int **alloc_grid(int width, int height)
}
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);


		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}

	return (p);
}
