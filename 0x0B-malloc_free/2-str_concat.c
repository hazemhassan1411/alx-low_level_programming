#include "main.h"
/**
 * _stringlen - it is a func
 * @s: it is char
 * Return: return
*/
int _stringlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * str_concat - it is a func
 * @s1: it is string
 * @s2: it is string
 * Return: return
*/
char *str_concat(char *s1, char *s2)
{
	int sz1, sz2, i;
	char *m;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	sz1 = _stringlen(s1);
	sz2 = _stringlen(s2);

	m = malloc((sz1 + sz2) * sizeof(char) + 1);
	if (m == 0)
		return (0);

	for (i = 0; i <= sz1 + sz2; i++)
	{
	if (i < sz1)
		m[i] = s1[i];
	else
		m[i] = s2[i - sz1];
	}
	m[i] = '\0';
	return (m);
}
