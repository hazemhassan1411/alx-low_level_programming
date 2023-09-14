#include "function_pointers.h"
/**
 * print_name - it is a function
 * @name: it is a name
 * @f: it is pointer to func
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
