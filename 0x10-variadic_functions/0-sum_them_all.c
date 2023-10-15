#include "variadic_functions.h"
/**
 * sum_them_all - it is a func
 * @n: it is a number
 * Return: return
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;

	va_list opra;

	if (n == 0)
		return (0);

	va_start(opra, n);

	for (i = 0; i < n; ++i)
	{
		sum += va_arg(opra, int);
	}
	va_end(opra);

	return (sum);
}
