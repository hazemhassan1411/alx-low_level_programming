#include "main.h"
/**
 * stringl - it is a func
 * @s: it is a var
 * Return: return
 */
int stringl(char *s)
{
	int size;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}
/**
 * argstostr - it is a func
 * @ac: it is a var
 * @av:it is a var
 * Return: return
 */
char *argstostr(int ac, char **av)
{
	int k = 0, cn = 0;
	int h = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; k < ac; k++, cn++)
		cn += stringl(av[k]);
	s = malloc(sizeof(char) * cn + 1);

	if (s == 0)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (h = 0; av[h][k] != '\0'; h++, cmpt++)
			s[cmpt] = av[h][k];
		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}
