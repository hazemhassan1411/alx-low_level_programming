#include "main.h"
/**
 * reverse_array - it is afunction
 * @a: an array
 * @n:  variable
 */



void reverse_array(int *a, int n)
{

	int i, k, g;

	for (i = 0, k = (n - 1); i < k; i++, k--)
	{

		g = a[i];
		a[i] = a[k];
		a[k] = g;

	}
}
