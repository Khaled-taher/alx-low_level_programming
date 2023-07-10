#include "main.h"

/**
 * free_grid - concatinate to strings
 * @grid: destination to concatinate after
 * @height: scource taht will be concatinated
 * Return: pointer to destination
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
