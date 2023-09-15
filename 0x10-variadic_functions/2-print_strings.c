#include "variadic_functions.h"
/**
 * print_strings - it is a function
 * @separator: it is a var
 * @n: it is avar
 * Return: return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *str;
	va_list rp;

	i = n;
	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(rp, n);
	while (i--)
		printf("%s%s", (str =  va_arg(rp, char *)) ? str : "(nil)",
	i ? (separator ? separator : "") : "\n");
		va_end(rp);
}
