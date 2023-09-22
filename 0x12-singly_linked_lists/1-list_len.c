#include "lists.h"
/**
 * list_len - it is function
 * @h: it is a pointer
 * Return: return j
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
	h = h->next;
	j++;
	}
	return (j);
}
