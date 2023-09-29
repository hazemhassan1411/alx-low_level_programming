#include "main.h"
/**
 * _puts_recursion - it is a func
 * @s:it is pointer to string
 * Return:return
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
