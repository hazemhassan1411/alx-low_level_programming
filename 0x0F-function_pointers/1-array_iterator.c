#include "function_pointers.h"
/**
 * array_iterator - it is a function
 * @array: it is an array
 * @size: it is the size of array
 * @action: it is call function
 * Return: return 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for ( i = 0; i < size; i++)
		action(array[i]);
}
