#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function that frees 2d array.
 * @grid: param 1.
 * @height: param 2.
 * Return: nothing is return.
 */
void free_grid(int **grid, int height)
{
	int my_counter;

	if (grid == NULL)
		return;
	for (my_counter = 0; my_counter < height; my_counter++)
		free(grid[my_counter]);
	free(grid);
}

