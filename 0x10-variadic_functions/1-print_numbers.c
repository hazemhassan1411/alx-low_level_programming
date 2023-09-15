#include "variadic_functions.h"
/**
 * print_numbers - it is a function
 * @separator: it is a var
 * @n: it is avar
 * Return: return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list rp;

	i = n;
	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(rp, n);
	while (i--)
		printf("%d%s", va_arg(rp, int),
	i ? (separator ? separator : "") : "\n");
		va_end(rp);
}
