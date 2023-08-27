#include "main.h"
/**
 * print_sign - it is afunction
 * @n: it is avar
 * Return: return 1, 0 ,-1
 */



int print_sign(int n)
{
	if (n > 0)
{
		_putchar(43);
		return (1);
}

	if (n == 0)
{
		_putchar(48);
		return (0);
}

	if (n < 0)
{
		_putchar(45);
		return (-1);
}

}
