#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * free_grid - function that create array
 * @grid: grid to free
 * @height: int
 * Return: Always 0 (Success)
 **/

void free_grid(int **grid, int height)
{

	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);

}
