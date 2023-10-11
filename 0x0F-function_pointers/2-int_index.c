#include "function_pointers.h"
/**
 * int_index - it is a func
 * @array: it is a name
 * @size: it is size
 * @cmp: it is void
 * Return: return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (array && size && cmp)
	while (i < size)
	{
	if (cmp(array[i]))
		return (i);
	i++;
	}
return (-1);
}
