#include "main.h"
/**
 * _sqrt_recursion - it is a function
 * @n: it is avar
 * @b: IT IS A VAR
 * Return: return squ
 */
int squ(int n, int b);
int _sqrt_recursion(int n)
{
	return (squ(n, 1));
}

/**
 * squ - it is a function
 * @b: it is a var
 * @n: it is a var
 * Return: return  the natural square root of a number
 */
int squ(int n, int b)
{
	if (b * b == n)
		return (b);
	else if (b * b < n)
		return (squ(n, b + 1));
	else
		return (-1);
}
