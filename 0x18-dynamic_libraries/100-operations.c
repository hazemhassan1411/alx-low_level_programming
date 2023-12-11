#include <stdio.h>
/**
 * add - add
 * @a: first integer
 * @b: second integer
 * Return: add
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - sub
 * @a: first integer
 * @b: second integer
 * Return: sub
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - mul
 * @a: first integer
 * @b: second integer
 * Return: mul
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - div
 * @a: first integer
 * @b: second integer
 * Return: div
 */

int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
