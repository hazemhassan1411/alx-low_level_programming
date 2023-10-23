
#include "main.h"

#include <stdlib.h>
/**
 *alloc_grid -a function frees a 2 dimensional grid previously
 *@width:free grid_______
 *@height: height of lines ______
 * Return: returns always (0) ______
 */
int **alloc_grid(int width, int height)
{

int **k, ip, jp;
k = malloc(height * sizeof(*k));
if (width <= 0  || height <= 0 || k == 0)
{
return (NULL);
}
else
{
for (ip = 0; ip < height; ip++)
{
k[ip] = malloc(width * sizeof(**k));
if (k[ip] == 0)
{
while (ip--)
free(k[ip]);
free(k);
return (NULL);
}
for (jp = 0; jp < width; jp++)
k[ip][jp] = 0;
}
}
return (k);
}
