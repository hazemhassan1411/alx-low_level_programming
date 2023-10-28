#include "main.h"

/**
 * flip_bits - it is func
 * @n:it is var
 * @m: it is var2
 * Return: return
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int c = 0;

	while (x)
	{
		if (x & 1ul)
			c++;
		x = x >> 1;
	}
	return (c);
}
