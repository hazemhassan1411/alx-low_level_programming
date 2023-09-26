#include "lists.h"
/**
 * listint_len - it is a func
 * @h: it is a var
 * Return: return
 */
size_t listint_len(const listint_t *h)
{
	size_t f = 0;

	while (h)
	{
		h = h->next;
		f++;
	}
	return (f);
}
