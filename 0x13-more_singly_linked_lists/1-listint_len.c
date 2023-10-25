#include "lists.h"

/**
 *listint_len-a function returns
 * @h: pointer
 * Return: return all
 */

size_t listint_len(const listint_t *h)
{
	size_t all = 0;

	while (h)
	{
		h = h->next;
		all++;
	}
	return (all);
}
