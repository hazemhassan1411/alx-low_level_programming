#include "variadic_functions.h"
/**
 * sum_them_all - it is afunction
 * @n: it is a var
 * Return: return g
 */
int sum_them_all(const unsigned int n, ...)
{
	int g = 0;
	int t = n;
	va_list rp;

	if (!n)
		return (0);
	va_start(rp, n);
	while (t--)
		g += va_arg(rp, int);
	va_end(rp);
	return (g);
}
