#include "main.h"
/**
 * _strl - it is a function to detrmine the size of string
 * @s: it is string
 * Return: return the size
 */

int _strl(char *s)
{
	int size = 0;

	for (; size != '\0'; size++)
	;	
	return (size);
}
/**
 * str_concat - it is a functhin
 * @s1: it is a string
 * @s2: it is a string
 * Return: return 0
 */

char *str_concat(char *s1, char *s2)
{
	int sz1, sz2, i;
	char *m;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	sz1 = _strl(s1);
	sz2 = _strl(s2);

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
	return (0);
}
