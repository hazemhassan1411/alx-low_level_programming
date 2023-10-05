#include "main.h"
/**
 * _isalpha - it is afunction
 * @c: it is avariable
 * Return: return 1 if true return 0 if not
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
