#include "variadic_functions.h"
/**
 * print_numbers - it is a func
 * @separator: it is a separator
 * @n: it is a number
 * Return: return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
	printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
		{
		printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
