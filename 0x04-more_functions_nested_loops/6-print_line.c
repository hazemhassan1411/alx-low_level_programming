#include "main.h"

/**
 * print_line - print thing
 *
 * @n: is the number of times
 *
 */


void print_line(int n)
{
	int jj;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (jj = 1; jj <= n; jj++)
			_putchar('_');
		_putchar('\n');
	}
}
