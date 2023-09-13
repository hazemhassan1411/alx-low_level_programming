#include "main.h"
#include <stdlib.h>
/**
 * _strdup - it is a function
 * @str: it is astring
 * Return: return m
 */

char *_strdup(char *str)
{
	int h = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; h < size; h++)
			m[h] = str[h];
	}
	return (m);
}
