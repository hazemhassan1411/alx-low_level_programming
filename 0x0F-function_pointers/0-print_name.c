#include "function_pointers.h"
/**
 * print_name - it is a func
 * @name: it is a name
 * @f: it is func
 * Return: return
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
