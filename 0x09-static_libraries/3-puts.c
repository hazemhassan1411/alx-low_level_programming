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
		putchar(*str + 0);
		str++;
	}
	putchar('\n');

}
