#include "variadic_functions.h"
/**
 * print_all - it is a func
 * @format: it is format
 * Return:return
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	int printed_chars;
	char c;
	const char *current_format = format;

	printed_chars = 0;

	while ((c = *current_format))
	{
	if (printed_chars++ > 0)
	putchar(',');
	if (c == 'c')
		printf("%c", va_arg(args, int));
	else if (c == 'i')
		printf("%d", va_arg(args, int));
	else if (c == 'f')
		printf("%f", va_arg(args, double));
	else if (c == 's')
	{
	char *s = va_arg(args, char *);

	if (s)
		printf("%s", s);
	else
		printf("(nil)");
	}
	current_format++;
	}

	va_end(args);
	putchar('\n');
}
