#include "main.h"
/**
 * _strncpy - it is a function
 * @dest: pointer to point
 * @src: pointer to point
 * @n: it is a variable
 * Return: return dest
 */





char *_strncpy(char *dest, char *src, int n)
{

	int l;


	for (l = 0; l < n && src[l] != '\0'; l++)
		dest[l] = src[l];

	while (l < n)
	{

		dest[l] = '\0';
		l++;

	}
		return (dest);

}
