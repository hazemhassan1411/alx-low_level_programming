#include "main.h"
/**
 * _strncat - it is a functhion concat to strings
 *
 * @dest: pointer to description
 * @src: pointer to discription
 * @n: a variable
 * Return: pointer string @dest
 */


char *_strncat(char *dest, char *src, int n)
{
		int a, b;

		a = 0;

		while (dest[a])
		a++;

		for (b = 0; b < n && src[b] != '\0' ; b++)
			dest[a + b] = src[i];

	dest[a + b] = '\0';

		return (dest);
}
