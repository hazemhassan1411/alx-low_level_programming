#include "main.h"
/**
 * binary_to_uint - it is func
 * @b: it is pointer
 * Return: return number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (b != '\0')
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);

		number = number * 2 + (*b++ - '0');
	}
	return (number);
}
