#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that nested loop to make grid.
 * @width: param 1.
 * @height: param 2.
 * Return: an integer is return.
 */
int **alloc_grid(int width, int height)
{
	int **my_grid;
	int x1, x2;

	if (height <= 0 || width <= 0)
		return (NULL);

	my_grid = malloc(height * sizeof(int *));
	if (my_grid == NULL)
		return (NULL);
	for (x1 = 0; x1 < height; x1++)
	{
		my_grid[x1] = malloc(width * sizeof(int));
		if (my_grid[x1] == NULL)
		{
			for (x2 = 0; x2 < x1; x2++)
				free(my_grid[x2]);

			free(my_grid);
			return (NULL);
		}

	for (x2 = 0; x2 < width; x2++)
		my_grid[x1][x2] = 0;
	}
	return (my_grid);
}

