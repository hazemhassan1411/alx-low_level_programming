#include "main.h"
/**
 * _strcpy - it is a function
 * @dest: it is avar
 * @src: it is avar
 * Return: return 0
 */
char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');

	return (dest);
}
