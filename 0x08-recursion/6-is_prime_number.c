#include "main.h"
/**
 * is_prime_number - it is a function
 * @n: it is a var
 * @other: int
 * Return: return
 */
int ch_prime(int n, int other);
int is_prime_number(int n)
{
	return (ch_prime(n, 2));
}
/**
 * ch_prime - it is a functhion
 * @n: it is a var
 * @other: it is a var
 * Return:return prime num
 */
int ch_prime(int n, int other)
{
	if (other >= n && n > 1)
		return (1);
	else if (n % other  == 0 || n <= 1)
		return (0);
	else
		return (ch_prime(n, other + 1));
}
