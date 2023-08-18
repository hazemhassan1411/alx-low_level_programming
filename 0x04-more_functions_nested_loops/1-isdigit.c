#include "main.h"

/**
 * _isdigit - is function
 *
 * @c: check function
 *
 * Return: return 1 it it true , return 0 if it false
 *
 */



int _isdigit(int c)
{
		if (c >= 0 && c <= 9)
			return (1);
		return (0);
}
