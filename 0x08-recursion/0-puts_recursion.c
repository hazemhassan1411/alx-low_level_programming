#include "main.h"
/**
 * _puts_recursion - it is afuncthion
 * @s: it is string
 * Return: return 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);

	}
}
