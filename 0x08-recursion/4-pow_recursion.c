#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion - it is function
 * @x: it is var
 * @y: it is var
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (pow(x, y));
	}
}
