#include "main.h"

/**
 * get_bit - it is func
 * @n: it is a  number
 * @index: it is int
 * Return; return
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
