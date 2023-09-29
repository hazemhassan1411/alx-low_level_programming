#include "main.h"
/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number of factorial
 * Return: return
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
