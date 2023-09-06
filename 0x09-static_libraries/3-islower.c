#include "main.h"

/**
 * _islower - is function
 *
 * @c: check function
 *
 * Return: return 1 it it true , return 0 if it false
 *
 */



int _islower(int c)
{
		if (c >= 97 && c <= 122)
			return (1);
		return (0);
}
