#include "function_pointers.h"
/**
 * array_iterator - it is a func
 * @array: it is a name
 * @size: it is size
 * @action: it is void
 * Return: return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *e = array + size - 1;

	if (size && action && array)
	while (array <= e)
		action(*array++);
}
