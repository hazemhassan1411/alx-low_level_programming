#include "variadic_functions.h"
/**
 * print_all - it is a func
 * @format: it is a format
 * Return: return
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);
	char *separator = "";
	const char *ptr = format;

	while (*ptr != '\0')
	{
	if (*ptr == 'c')
	{
		printf("%s%c", separator, va_arg(args, int));
	}
	else if (*ptr == 'i')
	{
		printf("%s%d", separator, va_arg(args, int));
	}
	else if (*ptr == 'f')
	{
		printf("%s%f", separator, va_arg(args, double));
	}
	else if (*ptr == 's')
	{
	char *str = va_arg(args, char*);

	if (str == NULL)
	{
		printf("%s(nil)", separator);
	}
	else
	{
		printf("%s%s", separator, str);
	}
	}
	separator = ", ";
	ptr++;
	}
	va_end(args);
	printf("\n");
}
