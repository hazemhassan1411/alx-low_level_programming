#include "main.h"
/**
 * _strcat - it is a functhion concat to strings
 *
 * @dest: pointer to description
 * @src: pointer to discription
 *
 * Return: pointer string @dest
 */



char *_strcat(char *dest, char *src)
{
		int a, b;

		a = 0;

		while (dest[a])
			a++;

		for (b = 0; src[b] ; b++)
			dest[a++] = src[b];

	return (dest);
}
