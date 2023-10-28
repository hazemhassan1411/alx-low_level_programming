#include "main.h"

/**
 * clear_bit - it is func
 * @n:it is var
 * @index: it is var2
 * Return: return
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
