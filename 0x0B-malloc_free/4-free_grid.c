#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function that frees a pervious 2D array
 * @grid: adresse of 2D array that we will free
 * @height: the height of the array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

}
