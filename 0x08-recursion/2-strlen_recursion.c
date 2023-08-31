#include "main.h"
/**
 * _strlen_recursion - return length the string
 * @s: it is string
 * Return: return int
 */
int _strlen_recursion(char *s)
{
	int nu = 0;

	if (*s > '\0')
	{
		nu += _strlen_recursion(s + 1) + 1;
	}
}
