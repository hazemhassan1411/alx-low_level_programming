#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - it is a func
 * @width: it is a var
 * @height: it is a var
 * Return: return
 */
int **alloc_grid(int width, int height)
{
	int **t = malloc(sizeof(*t) * height);
	int i, h;

	if (width <= 0 || height <= 0 || t == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			t[i] = malloc(sizeof(**t) * width);
			if (t[i] == 0)
			{
				while (i--)
					free(t[i]);
				free(t);
			}
			for (h = 0; h < width; h++)
				t[i][h] = 0;
		}
	}
	return (t);
}
