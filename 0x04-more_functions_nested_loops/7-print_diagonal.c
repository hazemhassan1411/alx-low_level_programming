#include  "main.h"

/**
 * print_diagonal - print a digagonal
 *
 * @n: is anumber
 *
 */

void print_diagonal(int n)
{
	int j, f;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (j = 1; j <= n; j++)
		{
			for (f = 1; f <= j; f++)
				_putchar(' ');
			_putchar(92); /* is equal to'/' char*/
			_putchar('\n');
		}
	}
}
