#include "main.h"

/**
 * print_binary - it is func
 * @n: the number
 * Return: return
 */
void print_binary(unsigned long int n)
{
	if (n)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
