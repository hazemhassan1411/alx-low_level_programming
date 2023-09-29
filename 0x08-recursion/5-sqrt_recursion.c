#include "main.h"
/**
 * _sqrt_recursion - it is a func
 * @n: it is a var
 * @n: it is a var
 * @va: it is a var
 * Return: return
 */
int s(int n, int va);
int _sqrt_recursion(int n)
{
	return (s(n, 1));
}
/**
 * s - it is func
 * @n: it is a var
 * @va: it is a var
 * Return: return
 */

int s(int n, int va)
{

	if (va * va == n)
		return (va);
	else if (va * va < n)
		return (s(n, va + 1));
	else
		return (-1);
}
