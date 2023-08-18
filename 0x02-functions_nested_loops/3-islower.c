#include "main.h"

/**
 * _islower - is function
 *
 * @c: check function
 *
 * Return: return 0 it it true , return 1 if it false
 *
 */



int _islower(int c)
{
		if (c >= 97 && c <= 122)
			return (0);
		return (1);
}
