#include <stdio.h>
/**
 * *_memcpy - it is a functhin
 * @dest: it is avar
 * @src: to ocopy
 * @n: it is a var
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int kk;

	for (kk = 0; kk < n; kk++)
	{
		dest[kk] = src[kk];
	}

	return (dest);
}
