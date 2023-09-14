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

	for (size_t i = 0; i < size; i++)
		action(*array);
}
