#include "main.h"


int heer(int n, int vec);

/**
 * is_prime_number -a function returns a number.
 * @n: number
 * Return: returns hear
 */

int is_prime_number(int n)
{
	return (heer(n, 2));
}
/**
 * heer-a function hel
 * @n: var1
 * @vec: var2
 * Return: return (-1)
 */
int heer(int n, int vec)
{
	if ((vec >= n) && (n >  1))
		return (1);
	else if ((n % vec == 0) || (n <= 1))
		return (0);
	else
		return (heer(n, vec + 1));
}
