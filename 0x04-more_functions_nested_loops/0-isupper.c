#include "main.h"

/**
 * _isupper - is function
 *
 * @c: check function
 *
 * Return: return 1 it it true , return 0 if it false
 *
 */


int _isupper(int c)
{
		if (c >= 65 && c <= 90)
			return (1);
		return (0);
}
