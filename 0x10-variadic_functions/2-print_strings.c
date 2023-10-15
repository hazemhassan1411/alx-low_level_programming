#include "variadic_functions.h"
/**
 * print_strings - it is a func
 * @separator: it is a separator
 * @n: it is a number
 * Return: return
 */
#include <stdarg.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;

va_list args;

va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		str = va_arg(args, char*);

	if (str == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}

	if (separator != NULL && i < n - 1)
	{
		printf("%s", separator);
	}
	}

	va_end(args);
	printf("\n");
}
