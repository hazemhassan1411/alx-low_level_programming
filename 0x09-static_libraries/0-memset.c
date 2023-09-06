#include <stdio.h>
/**
 * *_memset - it is afuncthion
 * @s: it is string
 * @b: it is avar
 * @n: it is avar
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ll;

	for (ll = 0; n > 0; ll++, n--)
	{
		s[ll] = b;
	}

	return (s);
}
