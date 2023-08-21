#include "main.h"

/**
 * _puts - that prints a string
 * @str: string parameter
 *
 */


void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');

}
