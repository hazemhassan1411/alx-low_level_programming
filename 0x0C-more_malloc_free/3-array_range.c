#include "main.h"

/**
 *array_range- a function that creates an array of integers___
 *@max: var 1_____
 *@min: var 2 _____
 * Return: return no_2 ____
 **/
int *array_range(int min, int max)
{
	int *mk;
	int l;
	int i;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	mk = malloc(sizeof(int) * l);
	if (!mk)
		return (NULL);

	for (i = 0; i < l; i++)
	mk[i] = min++;
	return (mk);
}
