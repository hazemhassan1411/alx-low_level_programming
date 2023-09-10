#include "main.h"

/**
 * create_array - it is a function
 * @size: it is a size of st
 * @c: it is a char
 * Return: return y
 */
char *create_array(unsigned int size, char c)
{
	int *y = malloc(size);

	if (size == 0 || y == 0)
		return (NULL);

	while (size--)
		y[size] == c;
	return (y);
}
