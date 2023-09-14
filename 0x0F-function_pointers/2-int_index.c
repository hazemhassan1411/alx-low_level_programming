#include "function_pointers.h"
/**
 * int_index - it is a function
 * @array: it is an array
 * @size: it is a size
 * @cmp: to compare
 * Return: return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
