#include "main.h"
/**
 * _strdup - it is a func
 * @str: it is integr
 * Return: the array
*/
char *_strdup(char *str)
{
	int i, s;
	char *m;

	if (str == NULL)
		return (NULL);

	for (s = 0 ; str[s] != '\0'; s++)
		;

m = malloc(s * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);

	else
	{
	for (i = 0; i < s; i++)
		m[i] = str[i];
	}
	return (m);
}
