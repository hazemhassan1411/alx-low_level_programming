#include "lists.h"
/**
 * _strlength - it is function get the length of string
 * @s: is is char
 * Return: return the length
 */

int _strlength(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - it is function
 * @h: it is pointer
 * Return: returning i
 */

size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlength(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		j++;
	}
	return (j);
}
