#include "main.h"
/**
 * free_grid - it is func
 * @grid: it is pointr
 * @height: it is var
 * Return: return
 */
void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
		free(grid[g]);
	free(grid);
}
