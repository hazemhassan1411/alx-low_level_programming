#include "main.h"
/**
 * _print_rev_recursion - it is a func
 * @s:it is pointer to string
 * Return:return
 */
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
