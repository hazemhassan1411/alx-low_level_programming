#include "main.h"
/**
 * create_array - it is a func
 * @size: it is integr
 * @c: it is char
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	char *h = malloc(size);

	if (size == 0 || h == 0)
		return (0);

	while (size--)
		h[size] = c;

	return (h);
}
