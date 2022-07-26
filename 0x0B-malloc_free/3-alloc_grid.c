#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocating 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	g = malloc(height * sizeof(int *));
	if (g == NULL)
	{
		free(g);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(g[i]);
			free(g);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			g[i][j] = 0;
	return (g);
}
